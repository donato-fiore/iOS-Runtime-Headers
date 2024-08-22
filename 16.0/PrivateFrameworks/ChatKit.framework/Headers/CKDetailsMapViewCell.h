// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDETAILSMAPVIEWCELL_H
#define CKDETAILSMAPVIEWCELL_H

@class NSString, UIView;
@protocol CKDetailsCell;


#import "CKDetailsCell.h"
#import "CKDetailsLocationStringCell.h"

@interface CKDetailsMapViewCell : CKDetailsCell <CKDetailsCell>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CKDetailsLocationStringCell *locationStringView; // ivar: _locationStringView
@property (retain, nonatomic) UIView *mapView; // ivar: _mapView
@property (nonatomic) BOOL shouldShowLocationString; // ivar: _shouldShowLocationString
@property (readonly) Class superclass;


+(BOOL)shouldHighlight;
+(id)reuseIdentifier;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)layoutSubviews;


@end


#endif