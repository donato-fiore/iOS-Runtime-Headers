// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FAPROFILEPICTURESTORE_H
#define FAPROFILEPICTURESTORE_H

@class FAFamilyCircle, NSMutableDictionary, NSDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface FAProfilePictureStore : NSObject {
    FAFamilyCircle *_familyCircle;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableDictionary *_profileImages;
}


@property (retain, nonatomic) FAFamilyCircle *familyCircle;
@property (readonly, copy, nonatomic) NSDictionary *profileImages;


+(CGFloat)screenScale;
+(id)_dataForImage:(id)arg0 ;
+(id)profilePictureForContact:(id)arg0 serverImageData:(id)arg1 firstName:(id)arg2 lastName:(id)arg3 diameter:(CGFloat)arg4 ;
-(id)initWithFamilyCircle:(id)arg0 ;
-(id)profilePictureForFamilyMember:(id)arg0 ;
-(id)profilePictureForFamilyMember:(id)arg0 pictureDiameter:(CGFloat)arg1 ;
-(id)profilePictureForFamilyMemberWithAltDSID:(id)arg0 pictureDiameter:(CGFloat)arg1 ;
-(id)profilePicturesWithDiameter:(CGFloat)arg0 ;
-(id)resizedPictureWithData:(id)arg0 diameter:(CGFloat)arg1 ;
-(void)_postReloadNotification;
-(void)_traitCollectionDidChange:(id)arg0 ;
-(void)dealloc;
-(void)fetchProfileImagesWithCompletion:(id)arg0 ;


@end


#endif