// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIDRAGSOURCELIFTEFFECT_H
#define _UIDRAGSOURCELIFTEFFECT_H

@class NSMapTable, NSString;
@protocol UIDragInteractionEffect;

#import <Foundation/Foundation.h>


@interface _UIDragSourceLiftEffect : NSObject <UIDragInteractionEffect>

 {
    NSMapTable *_liftOperationByContext;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)_addworkaroundForPropertyAnimator:(id)arg0 inView:(id)arg1 ;
-(void)_installInteractionPlattersForOperation:(id)arg0 ;
-(void)_setInteractionEffectsLifted:(BOOL)arg0 withOperation:(id)arg1 ;
-(void)_uninstallInteractionPlattersForOperation:(id)arg0 ;
-(void)interaction:(id)arg0 didChangeWithContext:(id)arg1 ;


@end


#endif