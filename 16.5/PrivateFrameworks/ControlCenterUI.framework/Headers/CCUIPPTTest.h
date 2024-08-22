// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CCUIPPTTEST_H
#define CCUIPPTTEST_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface CCUIPPTTest : NSObject <NSCopying>



@property (readonly, nonatomic) NSUInteger beginSignpost; // ivar: _beginSignpost
@property (readonly, nonatomic) NSUInteger endSignpost; // ivar: _endSignpost
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name


+(id)testWithName:(id)arg0 beginSignpost:(NSUInteger)arg1 endSignpost:(NSUInteger)arg2 ;
-(id)_initWithName:(id)arg0 beginSignpost:(NSUInteger)arg1 endSignpost:(NSUInteger)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif