// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBDOCKICONLISTVIEW_H
#define SBDOCKICONLISTVIEW_H



#import "SBIconListView.h"

@interface SBDockIconListView : SBIconListView



+(CGFloat)defaultHeight;
+(NSUInteger)defaultIconViewConfigurationOptions;
+(struct CGRect )defaultFrameForOrientation:(NSInteger)arg0 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg0 ;
-(BOOL)adaptsOrientationToTraitCollection;
-(BOOL)allowsAddingIconCount:(NSUInteger)arg0 ;
-(BOOL)isVertical;
-(id)initWithModel:(id)arg0 layoutProvider:(id)arg1 iconLocation:(id)arg2 orientation:(NSInteger)arg3 iconViewProvider:(id)arg4 ;


@end


#endif