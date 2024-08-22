// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKAPPLYREQUIREDFIELDROW_H
#define PKAPPLYREQUIREDFIELDROW_H

@class PKPaymentSetupField, NSString;
@protocol PKApplyCollectionViewRow, PKTextFieldCollectionViewListCellDelegate, NSCopying;

#import <Foundation/Foundation.h>


@interface PKApplyRequiredFieldRow : NSObject <PKApplyCollectionViewRow>

 {
    PKPaymentSetupField *_field;
    id<PKTextFieldCollectionViewListCellDelegate> *_cellDelegate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<NSCopying> *identifier;
@property (readonly) Class superclass;


-(Class)cellClass;
-(id)initWithField:(id)arg0 cellDelegate:(id)arg1 ;
-(void)configureCell:(id)arg0 ;


@end


#endif