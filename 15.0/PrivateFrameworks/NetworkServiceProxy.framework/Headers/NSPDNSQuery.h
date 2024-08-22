// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSPDNSQUERY_H
#define NSPDNSQUERY_H

@class NSString;

#import <Foundation/Foundation.h>


@interface NSPDNSQuery : NSObject

@property (readonly) NSString *name; // ivar: _name
@property (readonly) NSInteger recordClass; // ivar: _recordClass
@property (readonly) NSInteger recordType; // ivar: _recordType


-(id)copyStateDictionary;
-(id)initWithName:(id)arg0 recordType:(NSInteger)arg1 recordClass:(NSInteger)arg2 ;


@end


#endif