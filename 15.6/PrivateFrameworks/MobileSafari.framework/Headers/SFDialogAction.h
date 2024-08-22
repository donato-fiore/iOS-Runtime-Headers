// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFDIALOGACTION_H
#define SFDIALOGACTION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SFDialogAction : NSObject {
    id *_customAction;
}


@property (readonly, nonatomic) NSInteger actionType; // ivar: _actionType
@property (readonly, nonatomic) NSInteger activatingKeyboardShortcut; // ivar: _activatingKeyboardShortcut
@property (readonly, nonatomic) BOOL hasCustomAction;
@property (readonly, nonatomic) BOOL isPreferredAction; // ivar: _isPreferredAction
@property (readonly, nonatomic) NSString *title; // ivar: _title


+(id)actionWithTitle:(id)arg0 activatingKeyboardShortcut:(NSInteger)arg1 type:(NSInteger)arg2 ;
+(id)actionWithTitle:(id)arg0 activatingKeyboardShortcut:(NSInteger)arg1 type:(NSInteger)arg2 isPreferredAction:(BOOL)arg3 ;
-(id)initWithTitle:(id)arg0 activatingKeyboardShortcut:(NSInteger)arg1 type:(NSInteger)arg2 isPreferredAction:(BOOL)arg3 ;
-(void)setCustomAction:(id)arg0 ;
-(void)triggerCustomAction;


@end


#endif