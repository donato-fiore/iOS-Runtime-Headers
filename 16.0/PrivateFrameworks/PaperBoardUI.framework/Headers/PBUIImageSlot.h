// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBUIIMAGESLOT_H
#define PBUIIMAGESLOT_H

@class UIImage;
@protocol BSInvalidatable;

#import <Foundation/Foundation.h>


@interface PBUIImageSlot : NSObject

@property (retain, setter=_setImage:) UIImage *image; // ivar: _image
@property (readonly, nonatomic) NSObject<BSInvalidatable> *lifetimeToken; // ivar: _lifetimeToken


-(id)_deferredImageSlot;
-(id)_initWithImage:(id)arg0 lifetimeToken:(id)arg1 ;
-(id)initWithImage:(id)arg0 lifetimeToken:(id)arg1 ;
-(void)dealloc;


@end


#endif