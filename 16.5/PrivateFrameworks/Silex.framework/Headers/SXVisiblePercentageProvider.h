// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXVISIBLEPERCENTAGEPROVIDER_H
#define SXVISIBLEPERCENTAGEPROVIDER_H

@class NSString;
@protocol SXVisiblePercentageProviding, SXVisiblePercentageReporting;

#import <Foundation/Foundation.h>


@interface SXVisiblePercentageProvider : NSObject <SXVisiblePercentageProviding, SXVisiblePercentageReporting>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) CGFloat visiblePercentage; // ivar: _visiblePercentage


-(CGFloat)visiblePercentageOfObject:(id)arg0 ;
-(id)initWithVisiblePercentage:(CGFloat)arg0 ;


@end


#endif