// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKAPPLYMULTILEVELPICKERROW_H
#define PKAPPLYMULTILEVELPICKERROW_H

@class NSString, PKPaymentSetupFieldPicker;
@protocol PKApplyCollectionViewRow, NSCopying;

#import <Foundation/Foundation.h>


@interface PKApplyMultilevelPickerRow : NSObject <PKApplyCollectionViewRow>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<NSCopying> *identifier;
@property (readonly, nonatomic) PKPaymentSetupFieldPicker *picker; // ivar: _picker
@property (readonly) Class superclass;


-(Class)cellClass;
-(id)initWithPicker:(id)arg0 ;
-(void)configureCell:(id)arg0 ;


@end


#endif