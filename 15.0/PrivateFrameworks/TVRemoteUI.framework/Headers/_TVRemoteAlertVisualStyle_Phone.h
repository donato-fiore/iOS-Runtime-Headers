// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TVREMOTEALERTVISUALSTYLE_PHONE_H
#define _TVREMOTEALERTVISUALSTYLE_PHONE_H

@class NSString;
@protocol _TVRemoteAlertVisualStyleProviding;

#import <Foundation/Foundation.h>


@interface _TVRemoteAlertVisualStyle_Phone : NSObject <_TVRemoteAlertVisualStyleProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)allowsSwipeToDismiss;
-(BOOL)allowsTapToDismiss;
-(CGFloat)crossfadeDuration;
-(CGFloat)maximizedCornerRadius;
-(CGFloat)minimizedCornerRadius;
-(CGFloat)remoteHeight;
-(CGFloat)remoteWidth;
-(id)backgroundMaterialView;
-(id)foregroundVisualEffect;
-(struct CGRect )frameForParentView:(id)arg0 ;


@end


#endif