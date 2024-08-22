// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSTTABLECONTROLCELLSELECTION_H
#define TSTTABLECONTROLCELLSELECTION_H

@class TSKSelection;



@interface TSTTableControlCellSelection : TSKSelection

@property (readonly, nonatomic, getter=isKeyboardShown) BOOL keyboardShown; // ivar: _keyboardShown


+(Class)archivedSelectionClass;
+(id)controlCellSelection;
-(id)copy;
-(id)initWithKeyboardShown:(BOOL)arg0 ;


@end


#endif