// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVTAVATARLISTRECORDITEM_H
#define AVTAVATARLISTRECORDITEM_H

@class UIImage, NSString;
@protocol AVTAvatarListItem, AVTAvatarRecord;

#import <Foundation/Foundation.h>


@interface AVTAvatarListRecordItem : NSObject <AVTAvatarListItem>



@property (readonly, nonatomic) NSObject<AVTAvatarRecord> *avatar; // ivar: _avatar
@property (weak, nonatomic) UIImage *cachedImage; // ivar: _cachedImage
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithAvatar:(id)arg0 ;
// -(void)downcastWithRecordHandler:(id)arg0 imageHandler:(unk)arg1 viewHandler:(id)arg2  ;
// -(void)downcastWithRecordHandler:(id)arg0 viewHandler:(unk)arg1  ;


@end


#endif