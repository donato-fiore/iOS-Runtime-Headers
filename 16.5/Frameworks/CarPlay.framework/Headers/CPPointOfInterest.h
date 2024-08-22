// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPPOINTOFINTEREST_H
#define CPPOINTOFINTEREST_H

@class NSString, NSUUID, MKMapItem, UIImage;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CPImageSet.h"
#import "CPTextButton.h"

@interface CPPointOfInterest : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *detailSubtitle; // ivar: _detailSubtitle
@property (copy, nonatomic) NSString *detailSummary; // ivar: _detailSummary
@property (copy, nonatomic) NSString *detailTitle; // ivar: _detailTitle
@property (readonly, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (retain, nonatomic) MKMapItem *location; // ivar: _location
@property (retain, nonatomic) UIImage *pinImage;
@property (retain, nonatomic) CPImageSet *pinImageSet; // ivar: _pinImageSet
@property (retain, nonatomic) CPTextButton *primaryButton; // ivar: _primaryButton
@property (retain, nonatomic) CPTextButton *secondaryButton; // ivar: _secondaryButton
@property (retain, nonatomic) UIImage *selectedPinImage;
@property (retain, nonatomic) CPImageSet *selectedPinImageSet; // ivar: _selectedPinImageSet
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (copy, nonatomic) NSString *summary; // ivar: _summary
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) id *userInfo; // ivar: _userInfo


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPointOfInterest:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLocation:(id)arg0 title:(id)arg1 subtitle:(id)arg2 summary:(id)arg3 detailTitle:(id)arg4 detailSubtitle:(id)arg5 detailSummary:(id)arg6 pinImage:(id)arg7 ;
-(id)initWithLocation:(id)arg0 title:(id)arg1 subtitle:(id)arg2 summary:(id)arg3 detailTitle:(id)arg4 detailSubtitle:(id)arg5 detailSummary:(id)arg6 pinImage:(id)arg7 selectedPinImage:(id)arg8 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif