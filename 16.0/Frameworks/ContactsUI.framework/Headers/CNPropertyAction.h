// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNPROPERTYACTION_H
#define CNPROPERTYACTION_H

@class NSArray;
@protocol CNPropertyActionDelegate;


#import "CNContactAction.h"
#import "CNPropertyGroupItem.h"

@interface CNPropertyAction : CNContactAction

@property (weak, nonatomic) NSObject<CNPropertyActionDelegate> *delegate;
@property (readonly, nonatomic) CNPropertyGroupItem *propertyItem;
@property (copy, nonatomic) NSArray *propertyItems; // ivar: _propertyItems


+(void)performDefaultActionForItem:(id)arg0 sender:(id)arg1 ;
-(BOOL)canPerformAction;
-(id)initWithContact:(id)arg0 ;
-(id)initWithContact:(id)arg0 propertyItem:(id)arg1 ;
-(id)initWithContact:(id)arg0 propertyItems:(id)arg1 ;
-(void)performActionForItem:(id)arg0 sender:(id)arg1 ;
-(void)performActionWithSender:(id)arg0 ;
-(void)presentDisambiguationAlertWithSender:(id)arg0 ;


@end


#endif