// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXVIDEOPLAYERADSLOTVISIBLEPERCENTAGEPROVIDER_H
#define SXVIDEOPLAYERADSLOTVISIBLEPERCENTAGEPROVIDER_H

@class NSString;
@protocol SXVisiblePercentageProviding;

#import <Foundation/Foundation.h>


@interface SXVideoPlayerAdSlotVisiblePercentageProvider : NSObject <SXVisiblePercentageProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(CGFloat)visiblePercentageOfObject:(id)arg0 ;


@end


#endif