// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNPHOTOPICKERANIMOJIPROVIDER_H
#define CNPHOTOPICKERANIMOJIPROVIDER_H

@class NSString;
@protocol CNPhotoPickerProvider, AVTAvatarStore;

#import <Foundation/Foundation.h>


@interface CNPhotoPickerAnimojiProvider : NSObject <CNPhotoPickerProvider>



@property (readonly, nonatomic) NSObject<AVTAvatarStore> *avatarStore; // ivar: _avatarStore
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *identifier; // ivar: identifier
@property (readonly) Class superclass;


+(id)providerItemForAvatarRecord:(id)arg0 ;
+(id)providerItemForAvatarRecord:(id)arg0 imageProvider:(id)arg1 renderingQueue:(id)arg2 callbackQueue:(id)arg3 ;
-(BOOL)canCreateMemoji;
-(id)initWithVisualIdentity:(id)arg0 ;
-(id)initWithVisualIdentity:(id)arg0 avatarStore:(id)arg1 ;
-(id)loadItemsForSize:(struct CGSize )arg0 scale:(CGFloat)arg1 RTL:(BOOL)arg2 renderingQueue:(id)arg3 callbackQueue:(id)arg4 itemDelegate:(id)arg5 ;


@end


#endif