// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFBANNERVIEW_H
#define MFBANNERVIEW_H

@class UILabel, UIButton;
@protocol MFBannerViewDelegate, EMCollectionItemID;


#import "MFMessageHeaderViewBlock.h"

@interface MFBannerView : MFMessageHeaderViewBlock

@property (readonly, nonatomic) UILabel *bannerLabel; // ivar: _bannerLabel
@property (readonly, nonatomic) UILabel *dateLabel; // ivar: _dateLabel
@property (weak, nonatomic) NSObject<MFBannerViewDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) UIButton *editButton; // ivar: _editButton
@property (retain, nonatomic) NSObject<EMCollectionItemID> *itemID; // ivar: _itemID
@property (readonly, nonatomic) NSInteger type; // ivar: _type


-(id)initWithType:(NSInteger)arg0 itemID:(id)arg1 delegate:(id)arg2 ;
-(void)displayMessageUsingViewModel:(id)arg0 ;


@end


#endif