// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NEDNSQUERY_H
#define NEDNSQUERY_H

@class NSData, NSString;

#import <Foundation/Foundation.h>


@interface NEDNSQuery : NSObject

@property (copy) NSData *answerData; // ivar: _answerData
@property (readonly) NSString *name; // ivar: _name
@property (readonly) NSInteger recordClass; // ivar: _recordClass
@property (readonly) NSInteger recordType; // ivar: _recordType


-(id)createAnswer;
-(id)initWithName:(id)arg0 recordType:(NSInteger)arg1 recordClass:(NSInteger)arg2 ;


@end


#endif