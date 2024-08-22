// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TCMPSHUEADJUSTAUGMENTER_H
#define TCMPSHUEADJUSTAUGMENTER_H

@class NSString;
@protocol TCMPSImageAugmenting;

#import <Foundation/Foundation.h>


@interface TCMPSHueAdjustAugmenter : NSObject <TCMPSImageAugmenting>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat maxHueAdjust; // ivar: _maxHueAdjust
@property (readonly) Class superclass;


-(id)imageAugmentedFromImage:(id)arg0 generator:(id)arg1 ;
-(id)init;


@end


#endif