// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKEMERGENCYCARDTABLEITEM_H
#define HKEMERGENCYCARDTABLEITEM_H

@class _HKMedicalIDData, UIViewController, NSString;

#import <Foundation/Foundation.h>


@interface HKEmergencyCardTableItem : NSObject

@property (retain, nonatomic) _HKMedicalIDData *data; // ivar: _data
@property (readonly, nonatomic) BOOL isInEditMode; // ivar: _isInEditMode
@property (nonatomic) BOOL isSecondaryProfile; // ivar: _isSecondaryProfile
@property (weak, nonatomic) UIViewController *owningViewController; // ivar: _owningViewController
@property (retain, nonatomic) NSString *profileFirstName; // ivar: _profileFirstName
@property (nonatomic) BOOL shouldShowHints; // ivar: _shouldShowHints


-(BOOL)canEditRowAtIndex:(NSInteger)arg0 ;
-(BOOL)hasPresentableData;
-(BOOL)shouldHighlightRowAtIndex:(NSInteger)arg0 ;
-(CGFloat)tableView:(id)arg0 estimatedHeightForRowAtIndex:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndex:(NSInteger)arg1 ;
-(NSInteger)commitEditingStyle:(NSInteger)arg0 forRowAtIndex:(NSInteger)arg1 ;
-(NSInteger)editingStyleForRowAtIndex:(NSInteger)arg0 ;
-(NSInteger)numberOfRows;
-(id)_dequeueNoValueCellInTableView:(id)arg0 withTitle:(id)arg1 ;
-(id)init;
-(id)initInEditMode:(BOOL)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndex:(NSInteger)arg1 ;
-(id)title;
-(id)titleForFooter;
-(id)titleForHeader;
-(struct UIEdgeInsets )separatorInset;
-(void)commitEditing;
-(void)didCommitEditingStyle:(NSInteger)arg0 forRowAtIndex:(NSInteger)arg1 ;
-(void)localeDidChange:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndex:(NSInteger)arg1 ;
-(void)timeZoneDidChange:(id)arg0 ;


@end


#endif