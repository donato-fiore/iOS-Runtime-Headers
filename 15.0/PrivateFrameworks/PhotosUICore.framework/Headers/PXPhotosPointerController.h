// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXPHOTOSPOINTERCONTROLLER_H
#define PXPHOTOSPOINTERCONTROLLER_H

@class UIView, NSString, UIPointerInteraction;
@protocol UIPointerInteractionDelegate, PXSettingsKeyObserver, PXPhotosPointerControllerDelegate;

#import <Foundation/Foundation.h>


@interface PXPhotosPointerController : NSObject <UIPointerInteractionDelegate, PXSettingsKeyObserver>



@property (readonly, nonatomic) UIView *contentView; // ivar: _contentView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<PXPhotosPointerControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIPointerInteraction *pointerInteraction; // ivar: _pointerInteraction
@property (readonly) Class superclass;


-(id)initWithContentView:(id)arg0 delegate:(id)arg1 ;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(void)_setupWithContentView:(id)arg0 ;
-(void)invalidate;
-(void)pointerInteraction:(id)arg0 willEnterRegion:(id)arg1 animator:(id)arg2 ;
-(void)pointerInteraction:(id)arg0 willExitRegion:(id)arg1 animator:(id)arg2 ;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;


@end


#endif