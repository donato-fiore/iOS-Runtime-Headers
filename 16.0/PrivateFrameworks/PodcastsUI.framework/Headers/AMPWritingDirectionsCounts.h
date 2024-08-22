// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMPWRITINGDIRECTIONSCOUNTS_H
#define AMPWRITINGDIRECTIONSCOUNTS_H

@class NSString;

#import <Foundation/Foundation.h>


@interface AMPWritingDirectionsCounts : NSObject

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BOOL hasStronglyTypedCounts; // ivar: hasStronglyTypedCounts
@property (nonatomic, readonly) BOOL isRTLEnough; // ivar: isRTLEnough
@property (nonatomic, readonly) BOOL isRTLMinimal; // ivar: isRTLMinimal
@property (nonatomic, readonly) NSUInteger leftToRight; // ivar: leftToRight
@property (nonatomic, readonly) NSUInteger natural; // ivar: natural
@property (nonatomic, readonly) NSUInteger rightToLeft; // ivar: rightToLeft
@property (nonatomic, readonly) NSUInteger significantValues; // ivar: significantValues
@property (nonatomic, readonly) NSUInteger total; // ivar: total


+(id)add:(id)arg0 to:(id)arg1 ;
+(id)zero;
-(BOOL)isEqual:(id)arg0 ;
-(id)init;
-(id)initWithNatural:(NSUInteger)arg0 leftToRight:(NSUInteger)arg1 rightToLeft:(NSUInteger)arg2 ;


@end


#endif