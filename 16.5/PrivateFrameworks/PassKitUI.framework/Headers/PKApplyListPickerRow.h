// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKAPPLYLISTPICKERROW_H
#define PKAPPLYLISTPICKERROW_H

@class NSString, PKPaymentSetupFieldPickerItem;
@protocol PKApplyCollectionViewRow, NSCopying;

#import <Foundation/Foundation.h>


@interface PKApplyListPickerRow : NSObject <PKApplyCollectionViewRow>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<NSCopying> *identifier;
@property (readonly, nonatomic) PKPaymentSetupFieldPickerItem *pickerItem; // ivar: _pickerItem
@property (nonatomic) BOOL selected; // ivar: _selected
@property (readonly, nonatomic) NSString *submissionValue; // ivar: _submissionValue
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *title; // ivar: _title


-(Class)cellClass;
-(id)initWithPickerItem:(id)arg0 ;
-(void)configureCell:(id)arg0 ;


@end


#endif