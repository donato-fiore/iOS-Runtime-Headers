// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNGROUPIDENTITYACTIONITEM_H
#define CNGROUPIDENTITYACTIONITEM_H

@class NSString, UIImage;
@protocol CNGroupIdentityActionItemDelegate;

#import <Foundation/Foundation.h>


@interface CNGroupIdentityActionItem : NSObject

@property (copy, nonatomic) id *actionBlock; // ivar: _actionBlock
@property (readonly, nonatomic) NSString *actionType; // ivar: _actionType
@property (weak, nonatomic) NSObject<CNGroupIdentityActionItemDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) UIImage *image; // ivar: _image
@property (nonatomic) BOOL overrideEnabledState; // ivar: _overrideEnabledState
@property (nonatomic) BOOL shouldOverrideEnabledState; // ivar: _shouldOverrideEnabledState
@property (nonatomic) BOOL shouldPresentDisambiguationUI; // ivar: _shouldPresentDisambiguationUI
@property (readonly, nonatomic) NSString *title; // ivar: _title


+(id)imageForSystemImageNamed:(id)arg0 ;
+(id)imageForSystemImageNamed:(id)arg0 withPointSize:(CGFloat)arg1 ;
+(id)imageForSystemImageNamed:(id)arg0 withTextStyle:(id)arg1 ;
-(id)initWithTitle:(id)arg0 actionType:(id)arg1 actionBlock:(id)arg2 ;
-(id)initWithTitle:(id)arg0 actionType:(id)arg1 image:(id)arg2 actionBlock:(id)arg3 ;
-(id)initWithTitle:(id)arg0 actionType:(id)arg1 systemImageName:(id)arg2 actionBlock:(id)arg3 ;
-(id)initWithTitle:(id)arg0 actionType:(id)arg1 systemImageName:(id)arg2 overrideEnabledState:(BOOL)arg3 actionBlock:(id)arg4 ;


@end


#endif