// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFNANODOMAINCONTAINERVIEW_H
#define SFNANODOMAINCONTAINERVIEW_H

@class UIView;


#import "_SFBrowserView.h"

@interface SFNanoDomainContainerView : UIView

@property (weak, nonatomic) _SFBrowserView *browserView; // ivar: _browserView
@property (nonatomic) CGFloat maximumHeight; // ivar: _maximumHeight
@property (copy, nonatomic) id *platterTapAction; // ivar: _platterTapAction


+(CGFloat)defaultHeight;
+(CGFloat)defaultHeightInsideQuickboard;
+(CGFloat)defaultTopOffset;
-(void)updateWithDomain:(id)arg0 isSecure:(BOOL)arg1 showsNotSecureAnotation:(BOOL)arg2 ;


@end


#endif