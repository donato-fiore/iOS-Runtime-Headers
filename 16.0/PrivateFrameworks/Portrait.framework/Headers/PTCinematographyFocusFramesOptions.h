// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PTCINEMATOGRAPHYFOCUSFRAMESOPTIONS_H
#define PTCINEMATOGRAPHYFOCUSFRAMESOPTIONS_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PTCinematographyFocusFramesOptions : NSObject <NSCopying>



@property (nonatomic) float maximumDisparityPerSecond; // ivar: _maximumDisparityPerSecond
@property (nonatomic) ? maximumRackFocusPullTime; // ivar: _maximumRackFocusPullTime
@property (nonatomic) ? minimumRackFocusPullTime; // ivar: _minimumRackFocusPullTime


+(float)_defaultMaximumDisparityPerSecond;
+(struct ? )_defaultMaximumRackFocusPullTime;
+(struct ? )_defaultMinimumRackFocusPullTime;
-(BOOL)writeToGlobalMetadata:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithGlobalMetadata:(id)arg0 ;


@end


#endif