// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKCFACEDETAILSECTIONHEADERVIEW_H
#define NTKCFACEDETAILSECTIONHEADERVIEW_H

@class UITableViewHeaderFooterView, UILabel, UIListContentConfiguration, NSString;


#import "NTKCSeparatorView.h"

@interface NTKCFaceDetailSectionHeaderView : UITableViewHeaderFooterView {
    UILabel *_detailLabel;
    NTKCSeparatorView *_separator;
    UIListContentConfiguration *_configuration;
}


@property (copy, nonatomic) NSString *groupName;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *title;


+(CGFloat)headerHeight;
+(id)reuseIdentifier;
-(id)_traitCollectionAdjustedIfNeeded;
-(id)init;
-(id)initWithReuseIdentifier:(id)arg0 ;
-(void)_fontSizeDidChange;
-(void)_updateConfig;
-(void)layoutSubviews;


@end


#endif