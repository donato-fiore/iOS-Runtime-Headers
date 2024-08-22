// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKSETTINGSMECARDSHARINGNICKNAMEAVATARPROVIDER_H
#define CKSETTINGSMECARDSHARINGNICKNAMEAVATARPROVIDER_H

@class NSString, NSData;
@protocol CNMeCardSharingAvatarProvider;

#import <Foundation/Foundation.h>


@interface CKSettingsMeCardSharingNicknameAvatarProvider : NSObject <CNMeCardSharingAvatarProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *imageData; // ivar: _imageData
@property (readonly) Class superclass;


-(id)initWithImageData:(id)arg0 ;
-(void)generateAvatarImageOfSize:(struct CGSize )arg0 imageHandler:(id)arg1 ;


@end


#endif