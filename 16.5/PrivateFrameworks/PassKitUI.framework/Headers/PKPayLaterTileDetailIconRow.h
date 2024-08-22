// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYLATERTILEDETAILICONROW_H
#define PKPAYLATERTILEDETAILICONROW_H

@class NSString, UIFont, UIColor, UIImage;
@protocol PKPayLaterCollectionViewRow, NSCopying;

#import <Foundation/Foundation.h>


@interface PKPayLaterTileDetailIconRow : NSObject <PKPayLaterCollectionViewRow>



@property (nonatomic) CGFloat additionalIconPadding; // ivar: _additionalIconPadding
@property (nonatomic) BOOL centerDetailText; // ivar: _centerDetailText
@property (nonatomic) BOOL centerTitleText; // ivar: _centerTitleText
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *detail; // ivar: _detail
@property (retain, nonatomic) UIFont *detailFont; // ivar: _detailFont
@property (retain, nonatomic) UIColor *detailTextColor; // ivar: _detailTextColor
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *icon; // ivar: _icon
@property (readonly, nonatomic) NSObject<NSCopying> *identifier;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) UIFont *titleFont; // ivar: _titleFont
@property (retain, nonatomic) UIColor *titleTextColor; // ivar: _titleTextColor


-(BOOL)isEqual:(id)arg0 ;
-(Class)cellClass;
-(id)initWithTitle:(id)arg0 detail:(id)arg1 iconImage:(id)arg2 ;
-(void)configureCell:(id)arg0 ;


@end


#endif