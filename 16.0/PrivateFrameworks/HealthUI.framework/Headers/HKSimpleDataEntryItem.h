// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKSIMPLEDATAENTRYITEM_H
#define HKSIMPLEDATAENTRYITEM_H

@protocol HKSimpleDataEntryItemDelegate, HKSimpleDataEntryItemToolbarDelegate;

#import <Foundation/Foundation.h>


@interface HKSimpleDataEntryItem : NSObject

@property (weak, nonatomic) NSObject<HKSimpleDataEntryItemDelegate> *delegate; // ivar: _delegate
@property (nonatomic) NSUInteger placeholderType; // ivar: _placeholderType
@property (weak, nonatomic) NSObject<HKSimpleDataEntryItemToolbarDelegate> *toolbarDelegate; // ivar: _toolbarDelegate


-(id)accessoryToolbar;
-(id)cell;
-(id)formattedKeyAndValue;
-(void)beginEditing;
-(void)localeDidChange:(id)arg0 ;
-(void)toolbarDoneButtonPressed:(id)arg0 ;
-(void)toolbarNextButtonPressed:(id)arg0 ;
-(void)toolbarPrevButtonPressed:(id)arg0 ;
-(void)updateCellDisplay;


@end


#endif