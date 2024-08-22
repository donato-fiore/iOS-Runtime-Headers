// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HRSIDEBYSIDELABELCELL_H
#define HRSIDEBYSIDELABELCELL_H

@class NSString;


#import "WDMedicalRecordGroupableCell.h"

@interface HRSideBySideLabelCell : WDMedicalRecordGroupableCell {
    ? titleLabel;
    ? detailLabel;
    ? chevronView;
    ? title;
    ? detail;
}


@property (nonatomic, copy) NSString *detail;
@property (nonatomic, copy) NSString *title;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithReuseIdentifier:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif