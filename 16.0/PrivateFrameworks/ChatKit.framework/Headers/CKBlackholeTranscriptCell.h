// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKBLACKHOLETRANSCRIPTCELL_H
#define CKBLACKHOLETRANSCRIPTCELL_H

@class UITableViewCell, UILabel, UIDateLabel;



@interface CKBlackholeTranscriptCell : UITableViewCell

@property (retain, nonatomic) UILabel *bodyLabel; // ivar: _bodyLabel
@property (retain, nonatomic) UIDateLabel *dateLabel; // ivar: _dateLabel
@property (retain, nonatomic) UILabel *fromLabel; // ivar: _fromLabel


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)configureForMessageItem:(id)arg0 showSender:(BOOL)arg1 ;
-(void)prepareForReuse;


@end


#endif