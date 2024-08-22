// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKSIMPLEDATAENTRYPLAINTEXTITEM_H
#define HKSIMPLEDATAENTRYPLAINTEXTITEM_H

@class NSString;
@protocol HKSimpleDataEntryCellDelegate;


#import "HKSimpleDataEntryItem.h"
#import "HKSimpleDataEntryPlainTextCell.h"

@interface HKSimpleDataEntryPlainTextItem : HKSimpleDataEntryItem <HKSimpleDataEntryCellDelegate>

 {
    HKSimpleDataEntryPlainTextCell *_cell;
    NSString *_title;
    NSString *_registrantModelKey;
    NSString *_text;
    NSInteger _intention;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)cell;
-(id)formattedKeyAndValue;
-(id)initWithTitle:(id)arg0 registrantModelKey:(id)arg1 defaultText:(id)arg2 intention:(NSInteger)arg3 ;
-(void)doneButtonTapped:(id)arg0 ;
-(void)textFieldDidChangeValue:(id)arg0 forCell:(id)arg1 ;
-(void)updateCellDisplay;


@end


#endif