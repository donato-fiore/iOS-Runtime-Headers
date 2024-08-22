// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNMECARDSHARINGCONTACTAVATARPROVIDER_H
#define CNMECARDSHARINGCONTACTAVATARPROVIDER_H

@class CNContact, NSString, NSData;
@protocol CNMeCardSharingAvatarProvider, CNMeCardSharingAvatarImageDataProvider;

#import <Foundation/Foundation.h>

#import "CNAvatarImageRenderer.h"

@interface CNMeCardSharingContactAvatarProvider : NSObject <CNMeCardSharingAvatarProvider, CNMeCardSharingAvatarImageDataProvider>



@property (readonly, nonatomic) CNContact *contact; // ivar: _contact
@property (readonly, nonatomic) CGRect cropRect;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *imageData;
@property (readonly, nonatomic) CNAvatarImageRenderer *renderer; // ivar: _renderer
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSData *thumbnailImageData;


-(id)initWithContact:(id)arg0 ;
-(id)initWithContact:(id)arg0 renderer:(id)arg1 ;
-(void)generateAvatarImageOfSize:(struct CGSize )arg0 imageHandler:(id)arg1 ;


@end


#endif