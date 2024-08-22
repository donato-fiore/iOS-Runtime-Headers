// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MULOADINGOVERLAYCONTROLLER_H
#define MULOADINGOVERLAYCONTROLLER_H

@class UIView;

#import <Foundation/Foundation.h>

#import "MULoadingView.h"

@interface MULoadingOverlayController : NSObject {
    MULoadingView *_loadingView;
    UIView *_contentView;
    UIView *_parentView;
}




-(id)initWithParentView:(id)arg0 contentView:(id)arg1 ;
-(void)attachLoadingOverlay;
-(void)removeLoadingOverlayAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)updateLayoutForBoundsChange;


@end


#endif