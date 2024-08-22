// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UISTATUSBAREXTERNALSTYLEATTRIBUTES_H
#define UISTATUSBAREXTERNALSTYLEATTRIBUTES_H



#import "UIStatusBarNewUIStyleAttributes.h"

@interface UIStatusBarExternalStyleAttributes : UIStatusBarNewUIStyleAttributes



-(BOOL)shouldShowInternalItemType:(int)arg0 withScreenCapabilities:(id)arg1 ;
-(CGFloat)heightForMetrics:(NSInteger)arg0 ;
-(Class)foregroundStyleClass;
-(NSInteger)idiom;
-(NSInteger)tapButtonType;
-(id)backgroundImageName;


@end


#endif