// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVTAVATARLISTIMAGEITEM_H
#define AVTAVATARLISTIMAGEITEM_H

@class NSString, UIImage;
@protocol AVTAvatarListItem;

#import <Foundation/Foundation.h>


@interface AVTAvatarListImageItem : NSObject <AVTAvatarListItem>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIImage *image; // ivar: _image
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *title; // ivar: _title


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithImage:(id)arg0 title:(id)arg1 ;
// -(void)downcastWithRecordHandler:(id)arg0 imageHandler:(unk)arg1 viewHandler:(id)arg2  ;
// -(void)downcastWithRecordHandler:(id)arg0 viewHandler:(unk)arg1  ;


@end


#endif