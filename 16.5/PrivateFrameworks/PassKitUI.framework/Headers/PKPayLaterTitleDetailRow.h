// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYLATERTITLEDETAILROW_H
#define PKPAYLATERTITLEDETAILROW_H

@class NSString, UIColor, UIFont, UIImage;
@protocol PKPayLaterCollectionViewRow, NSCopying;

#import <Foundation/Foundation.h>


@interface PKPayLaterTitleDetailRow : NSObject <PKPayLaterCollectionViewRow>

 {
    id *_selectionHandler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *detail; // ivar: _detail
@property (retain, nonatomic) UIColor *detailColor; // ivar: _detailColor
@property (retain, nonatomic) UIFont *detailFont; // ivar: _detailFont
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<NSCopying> *identifier;
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (retain, nonatomic) UIColor *imageTintColor; // ivar: _imageTintColor
@property (nonatomic) BOOL showSpinner; // ivar: _showSpinner
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) UIColor *titleColor; // ivar: _titleColor
@property (retain, nonatomic) UIFont *titleFont; // ivar: _titleFont


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)shouldHighlightItem;
-(Class)cellClass;
-(id)initWithTitle:(id)arg0 detail:(id)arg1 selectionHandler:(id)arg2 ;
-(void)configureCell:(id)arg0 ;
-(void)handleCellSelection;


@end


#endif