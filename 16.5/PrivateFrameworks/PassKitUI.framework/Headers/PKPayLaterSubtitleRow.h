// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYLATERSUBTITLEROW_H
#define PKPAYLATERSUBTITLEROW_H

@class NSString, UIFont, UIColor, UIImage;
@protocol PKPayLaterCollectionViewRow, NSCopying;

#import <Foundation/Foundation.h>


@interface PKPayLaterSubtitleRow : NSObject <PKPayLaterCollectionViewRow>

 {
    id *_selectionHandler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<NSCopying> *identifier;
@property (nonatomic) BOOL showSpinner; // ivar: _showSpinner
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (retain, nonatomic) UIFont *subtitleFont; // ivar: _subtitleFont
@property (retain, nonatomic) UIColor *subtitleTextColor; // ivar: _subtitleTextColor
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) UIFont *titleFont; // ivar: _titleFont
@property (copy, nonatomic) UIImage *titleIcon; // ivar: _titleIcon
@property (retain, nonatomic) UIColor *titleTextColor; // ivar: _titleTextColor


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)shouldHighlightItem;
-(Class)cellClass;
-(id)initWithTitle:(id)arg0 subtitle:(id)arg1 selectionHandler:(id)arg2 ;
-(void)configureCell:(id)arg0 ;
-(void)handleCellSelection;


@end


#endif