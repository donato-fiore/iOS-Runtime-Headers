// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYLATERSTACKEDLEADINGTRAILINGROW_H
#define PKPAYLATERSTACKEDLEADINGTRAILINGROW_H

@class NSString, UIColor;
@protocol PKPayLaterCollectionViewRow, NSCopying;

#import <Foundation/Foundation.h>


@interface PKPayLaterStackedLeadingTrailingRow : NSObject <PKPayLaterCollectionViewRow>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *detailText; // ivar: _detailText
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<NSCopying> *identifier;
@property (copy, nonatomic) NSString *leadingPrimaryText; // ivar: _leadingPrimaryText
@property (copy, nonatomic) NSString *leadingSecondaryText; // ivar: _leadingSecondaryText
@property (nonatomic) CGFloat progress; // ivar: _progress
@property (retain, nonatomic) UIColor *progressBarEndColor; // ivar: _progressBarEndColor
@property (retain, nonatomic) UIColor *progressBarStartColor; // ivar: _progressBarStartColor
@property (nonatomic) BOOL showProgressBar; // ivar: _showProgressBar
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *trailingPrimaryText; // ivar: _trailingPrimaryText
@property (copy, nonatomic) NSString *trailingSecondaryText; // ivar: _trailingSecondaryText


-(BOOL)isEqual:(id)arg0 ;
-(Class)cellClass;
-(id)initWithLeadingPrimaryText:(id)arg0 leadingSecondaryText:(id)arg1 trailingPrimaryText:(id)arg2 trailingSecondaryText:(id)arg3 detailText:(id)arg4 ;
-(void)configureCell:(id)arg0 ;


@end


#endif