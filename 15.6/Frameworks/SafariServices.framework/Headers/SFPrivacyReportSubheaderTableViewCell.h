// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFPRIVACYREPORTSUBHEADERTABLEVIEWCELL_H
#define SFPRIVACYREPORTSUBHEADERTABLEVIEWCELL_H

@class UITableViewCell, UILabel, NSString;



@interface SFPrivacyReportSubheaderTableViewCell : UITableViewCell {
    UILabel *_subheaderLabel;
}


@property (copy, nonatomic) NSString *subheaderText; // ivar: _subheaderText


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;


@end


#endif