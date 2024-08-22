// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKEMERGENCYCARDGROUPTABLEITEM_H
#define HKEMERGENCYCARDGROUPTABLEITEM_H

@class NSMutableArray, NSArray, NSString;


#import "HKEmergencyCardTableItem.h"

@interface HKEmergencyCardGroupTableItem : HKEmergencyCardTableItem {
    NSMutableArray *_cumulativeRowOffsets;
    NSArray *_allSubItems;
}


@property (retain, nonatomic) NSArray *subitems; // ivar: _subitems
@property (retain, nonatomic) NSString *titleForHeader; // ivar: _titleForHeader


-(BOOL)canEditRowAtIndex:(NSInteger)arg0 ;
-(BOOL)hasPresentableData;
-(BOOL)shouldHighlightRowAtIndex:(NSInteger)arg0 ;
-(CGFloat)tableView:(id)arg0 estimatedHeightForRowAtIndex:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndex:(NSInteger)arg1 ;
-(NSInteger)commitEditingStyle:(NSInteger)arg0 forRowAtIndex:(NSInteger)arg1 ;
-(NSInteger)editingStyleForRowAtIndex:(NSInteger)arg0 ;
-(NSInteger)numberOfRows;
-(id)tableView:(id)arg0 cellForRowAtIndex:(NSInteger)arg1 ;
-(void)_getSubitem:(*id)arg0 andSubitemRow:(*NSInteger)arg1 forTableViewRow:(NSInteger)arg2 ;
-(void)commitEditing;
-(void)didCommitEditingStyle:(NSInteger)arg0 forRowAtIndex:(NSInteger)arg1 ;
-(void)setData:(id)arg0 ;
-(void)setOwningViewController:(id)arg0 ;
-(void)setProfileFirstName:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndex:(NSInteger)arg1 ;


@end


#endif