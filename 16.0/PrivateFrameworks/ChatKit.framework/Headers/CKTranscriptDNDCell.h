// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKTRANSCRIPTDNDCELL_H
#define CKTRANSCRIPTDNDCELL_H

@class UITableViewCell, UISwitch;



@interface CKTranscriptDNDCell : UITableViewCell

@property (retain, nonatomic) UISwitch *muteSwitch; // ivar: _muteSwitch


+(CGFloat)preferredHeight;
+(id)identifier;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)layoutSubviews;


@end


#endif