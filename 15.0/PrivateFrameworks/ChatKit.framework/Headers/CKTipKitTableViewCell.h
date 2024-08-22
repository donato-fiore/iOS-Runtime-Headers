// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKTIPKITTABLEVIEWCELL_H
#define CKTIPKITTABLEVIEWCELL_H

@class UITableViewCell, TPKContentView;



@interface CKTipKitTableViewCell : UITableViewCell

@property (retain, nonatomic) TPKContentView *tipKitContentView; // ivar: _tipKitContentView


+(id)identifier;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)prepareForReuse;


@end


#endif