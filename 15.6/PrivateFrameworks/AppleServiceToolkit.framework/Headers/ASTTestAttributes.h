// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASTTESTATTRIBUTES_H
#define ASTTESTATTRIBUTES_H

@class NSDictionary, NSNumber, NSString;

#import <Foundation/Foundation.h>


@interface ASTTestAttributes : NSObject

@property (readonly, nonatomic) NSDictionary *dictionary;
@property (retain, nonatomic) NSNumber *testId; // ivar: _testId
@property (retain, nonatomic) NSString *version; // ivar: _version


+(id)attributesWithTestId:(id)arg0 version:(id)arg1 ;
-(id)description;
-(id)init;
-(id)initWithTestId:(id)arg0 version:(id)arg1 ;


@end


#endif