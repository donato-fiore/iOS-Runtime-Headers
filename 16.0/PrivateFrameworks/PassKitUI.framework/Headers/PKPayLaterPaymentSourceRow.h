// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYLATERPAYMENTSOURCEROW_H
#define PKPAYLATERPAYMENTSOURCEROW_H

@class PKPayLaterPaymentSource, NSString, UIImage;
@protocol PKPayLaterCollectionViewRow, NSCopying;

#import <Foundation/Foundation.h>


@interface PKPayLaterPaymentSourceRow : NSObject <PKPayLaterCollectionViewRow>

 {
    PKPayLaterPaymentSource *_paymentSource;
    id *_selectionHandler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDisabled) BOOL disabled; // ivar: _disabled
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<NSCopying> *identifier;
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (copy, nonatomic) NSString *overrideSecondaryText; // ivar: _overrideSecondaryText
@property (nonatomic, getter=isSelected) BOOL selected; // ivar: _selected
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)shouldHighlightItem;
-(Class)cellClass;
-(id)initWithPayLaterPaymentSource:(id)arg0 selectionHandler:(id)arg1 ;
-(void)configureCell:(id)arg0 ;
-(void)handleCellSelection;


@end


#endif