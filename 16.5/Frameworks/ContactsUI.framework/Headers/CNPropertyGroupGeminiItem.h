// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNPROPERTYGROUPGEMINIITEM_H
#define CNPROPERTYGROUPGEMINIITEM_H

@class NSString, CNMutableContact, CNGeminiResult;
@protocol CNUIGeminiDataSourceDelegate;


#import "CNPropertyGroupItem.h"

@interface CNPropertyGroupGeminiItem : CNPropertyGroupItem <CNUIGeminiDataSourceDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CNMutableContact *editingContact; // ivar: _editingContact
@property (retain, nonatomic) CNGeminiResult *geminiResult; // ivar: _geminiResult
@property (weak, nonatomic) NSObject<CNUIGeminiDataSourceDelegate> *geminiUpdateDelegate; // ivar: _geminiUpdateDelegate
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)canRemove;
-(BOOL)isEquivalentToItem:(id)arg0 whenEditing:(BOOL)arg1 ;
-(BOOL)isValidValue:(id)arg0 ;
-(id)displayLabel;
-(id)displayStringForValue:(id)arg0 ;
-(id)displayValue;
-(void)geminiDataSourceDidUpdate:(id)arg0 ;
-(void)updateLabeledValueWithValue:(id)arg0 ;


@end


#endif