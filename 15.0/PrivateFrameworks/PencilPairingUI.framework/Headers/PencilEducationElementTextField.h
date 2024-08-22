// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PENCILEDUCATIONELEMENTTEXTFIELD_H
#define PENCILEDUCATIONELEMENTTEXTFIELD_H

@class UITextField, NSSet;



@interface PencilEducationElementTextField : UITextField

@property (retain, nonatomic) NSSet *allowedCalloutActions; // ivar: _allowedCalloutActions
@property (nonatomic) BOOL ignoreScribbleInsertText; // ivar: _ignoreScribbleInsertText


-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(NSInteger)_textInputSource;
-(struct CGRect )editingRectForBounds:(struct CGRect )arg0 ;
-(struct CGRect )textRectForBounds:(struct CGRect )arg0 ;
-(void)insertText:(id)arg0 alternatives:(id)arg1 style:(NSInteger)arg2 ;


@end


#endif