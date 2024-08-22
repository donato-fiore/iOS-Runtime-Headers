// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKSHAREDCREDENTIALTABLEVIEWCELL_H
#define PKSHAREDCREDENTIALTABLEVIEWCELL_H

@class PKSharedCredentialsGroupController, PKSharedCredentialGroup;


#import "PKAvatarTableViewCell.h"

@interface PKSharedCredentialTableViewCell : PKAvatarTableViewCell {
    PKSharedCredentialsGroupController *_groupController;
}


@property (retain, nonatomic) PKSharedCredentialGroup *group; // ivar: _group


-(id)initWithGroup:(id)arg0 groupController:(id)arg1 reuseIdentifier:(id)arg2 delegate:(id)arg3 ;
-(id)localizedGroupState;
-(void)layoutSubviews;
-(void)updateCellWithContact:(id)arg0 ;


@end


#endif