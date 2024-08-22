// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIMENUPREPARATIONCONTEXT_H
#define _UIMENUPREPARATIONCONTEXT_H

@protocol UIDeferredMenuElementDelegate;

#import <Foundation/Foundation.h>

#import "UIResponder.h"

@interface _UIMenuPreparationContext : NSObject

@property (weak, nonatomic) NSObject<UIDeferredMenuElementDelegate> *deferredElementDelegate; // ivar: _deferredElementDelegate
@property (readonly, weak, nonatomic) UIResponder *firstResponderTarget; // ivar: _firstResponderTarget
@property (readonly, weak, nonatomic) id *preparer; // ivar: _preparer
@property (weak, nonatomic) id *sender; // ivar: _sender
@property (nonatomic) BOOL supportsCustomViewMenuElements; // ivar: _supportsCustomViewMenuElements
@property (nonatomic) BOOL supportsHeaderView; // ivar: _supportsHeaderView
@property (nonatomic) BOOL useSenderAsResponderSender; // ivar: _useSenderAsResponderSender


+(id)contextWithPreparer:(id)arg0 firstResponderTarget:(id)arg1 ;


@end


#endif