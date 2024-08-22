// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVTAVATARLISTVIEWITEM_H
#define AVTAVATARLISTVIEWITEM_H

@class NSString, UIView;
@protocol AVTAvatarListItem;

#import <Foundation/Foundation.h>


@interface AVTAvatarListViewItem : NSObject <AVTAvatarListItem>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIView *view; // ivar: _view


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithView:(id)arg0 ;
// -(void)downcastWithRecordHandler:(id)arg0 imageHandler:(unk)arg1 viewHandler:(id)arg2  ;
// -(void)downcastWithRecordHandler:(id)arg0 viewHandler:(unk)arg1  ;


@end


#endif