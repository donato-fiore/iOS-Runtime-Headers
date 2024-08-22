// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKCONVERSATIONLISTCOLLECTIONVIEWTOOLBAR_H
#define CKCONVERSATIONLISTCOLLECTIONVIEWTOOLBAR_H

@class UIToolbar;



@interface CKConversationListCollectionViewToolbar : UIToolbar

@property (nonatomic) BOOL shouldExpandHeight; // ivar: _shouldExpandHeight


-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)contractHeight;
-(void)expandHeight;


@end


#endif