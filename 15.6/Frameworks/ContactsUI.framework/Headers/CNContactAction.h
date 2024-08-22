// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNCONTACTACTION_H
#define CNCONTACTACTION_H

@class UIColor, CNContact, CNMutableContact, NSString;
@protocol CNContactActionDelegate;

#import <Foundation/Foundation.h>


@interface CNContactAction : NSObject

@property (readonly, nonatomic) BOOL canPerformAction; // ivar: _canPerformAction
@property (retain, nonatomic) UIColor *color; // ivar: _color
@property (retain, nonatomic) CNContact *contact; // ivar: _contact
@property (weak, nonatomic) NSObject<CNContactActionDelegate> *delegate; // ivar: _delegate
@property (nonatomic, getter=isDestructive) BOOL destructive; // ivar: _destructive
@property (retain, nonatomic) UIColor *glyphColor; // ivar: _glyphColor
@property (readonly, nonatomic) CNMutableContact *mutableContact;
@property (readonly, nonatomic) SEL selector; // ivar: _selector
@property (nonatomic) BOOL showBackgroundPlatter; // ivar: _showBackgroundPlatter
@property (readonly, nonatomic) id *target; // ivar: _target
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) NSInteger transportType; // ivar: _transportType
@property (nonatomic) BOOL wrapTitle; // ivar: _wrapTitle


+(id)contactActionWithTitle:(id)arg0 target:(id)arg1 selector:(SEL)arg2 ;
+(id)contactActionWithTitle:(id)arg0 target:(id)arg1 selector:(SEL)arg2 destructive:(BOOL)arg3 ;
-(id)description;
-(id)init;
-(id)initWithContact:(id)arg0 ;
-(id)initWithTitle:(id)arg0 target:(id)arg1 selector:(SEL)arg2 destructive:(BOOL)arg3 ;
-(void)performActionWithSender:(id)arg0 ;


@end


#endif