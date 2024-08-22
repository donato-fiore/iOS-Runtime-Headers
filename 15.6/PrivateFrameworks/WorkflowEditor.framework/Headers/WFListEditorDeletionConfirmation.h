// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFLISTEDITORDELETIONCONFIRMATION_H
#define WFLISTEDITORDELETIONCONFIRMATION_H


#import <Foundation/Foundation.h>


@interface WFListEditorDeletionConfirmation : NSObject

@property (readonly, nonatomic) id *confirmationHandler; // ivar: _confirmationHandler
@property (readonly, nonatomic) NSUInteger itemIndex; // ivar: _itemIndex


+(id)confirmationForDeletingItemAtIndex:(NSUInteger)arg0 withHandler:(id)arg1 ;
-(id)initWithItemIndex:(NSUInteger)arg0 confirmationHandler:(id)arg1 ;


@end


#endif