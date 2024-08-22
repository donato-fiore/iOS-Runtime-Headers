// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SPUITAPTORADARVIEW_H
#define SPUITAPTORADARVIEW_H

@class NUIContainerBoxView;



@interface SPUITapToRadarView : NUIContainerBoxView



+(BOOL)shouldDisplayTapToRadar;
+(void)openTapToRadarWithQuery:(id)arg0 sections:(id)arg1 rankingDebugLog:(id)arg2 ;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(void)updateImage;


@end


#endif