// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKEVENTDETAILORGANIZERCELL_H
#define EKEVENTDETAILORGANIZERCELL_H

@class NSString, UILabel;
@protocol EKIdentityProtocol;


#import "EKEventDetailCell.h"
#import "EKUILabeledAvatarView.h"

@interface EKEventDetailOrganizerCell : EKEventDetailCell {
    NSString *_organizerName;
    EKUILabeledAvatarView *_organizerView;
    UILabel *_organizerLabel;
    UILabel *_titleView;
    id<EKIdentityProtocol> *_organizerOverride;
}


@property (nonatomic) BOOL hideDisclosureIndicator; // ivar: _hideDisclosureIndicator


+(id)_organizerFont;
+(id)_titleFont;
-(BOOL)shouldDisplayForEvent;
-(BOOL)update;
-(id)_organizerLabel;
-(id)_organizerView;
-(id)_titleView;
-(id)initWithEvent:(id)arg0 editable:(BOOL)arg1 organizerOverride:(id)arg2 ;
-(void)_updateDisclosureIndicator;


@end


#endif