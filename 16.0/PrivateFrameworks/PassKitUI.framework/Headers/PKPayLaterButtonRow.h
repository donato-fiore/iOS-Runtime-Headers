// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYLATERBUTTONROW_H
#define PKPAYLATERBUTTONROW_H

@class NSAttributedString, NSString, UIImage, UIColor;
@protocol PKPayLaterCollectionViewRow, NSCopying;

#import <Foundation/Foundation.h>


@interface PKPayLaterButtonRow : NSObject <PKPayLaterCollectionViewRow>

 {
    NSAttributedString *_title;
    id *_selectionHandler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDisabled) BOOL disabled; // ivar: _disabled
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<NSCopying> *identifier;
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (nonatomic) BOOL showSpinner; // ivar: _showSpinner
@property (readonly) Class superclass;
@property (retain, nonatomic) UIColor *textColor; // ivar: _textColor


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)shouldHighlightItem;
-(Class)cellClass;
-(id)initWithTitle:(id)arg0 selectionHandler:(id)arg1 ;
-(void)configureCell:(id)arg0 ;
-(void)handleCellSelection;


@end


#endif