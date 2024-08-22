// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNPROPERTYINSTANTMESSAGEEDITINGCELL_H
#define CNPROPERTYINSTANTMESSAGEEDITINGCELL_H

@class NSString, CNInstantMessageAddress;
@protocol CNPickerControllerDelegate;


#import "CNPropertySimpleEditingCell.h"

@interface CNPropertyInstantMessageEditingCell : CNPropertySimpleEditingCell <CNPickerControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CNInstantMessageAddress *imAddress;
@property (readonly) Class superclass;


-(void)labelButtonClicked:(id)arg0 ;
-(void)picker:(id)arg0 didPickItem:(id)arg1 ;
-(void)pickerDidCancel:(id)arg0 ;


@end


#endif