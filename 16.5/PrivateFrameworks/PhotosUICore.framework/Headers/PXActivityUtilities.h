// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXACTIVITYUTILITIES_H
#define PXACTIVITYUTILITIES_H


#import <Foundation/Foundation.h>


@interface PXActivityUtilities : NSObject



+(id)_initialsFromGivenName:(id)arg0 familyName:(id)arg1 ;
+(id)sharedWorkQueue;
+(id)textForDate:(id)arg0 ;
+(void)_requestContactMatchingEmail:(id)arg0 orPhone:(id)arg1 withFirstName:(id)arg2 lastName:(id)arg3 keysToFetch:(id)arg4 withCompletion:(id)arg5 ;
+(void)_requestImageForContact:(id)arg0 targetSize:(struct CGSize )arg1 displayScale:(CGFloat)arg2 isRTL:(BOOL)arg3 completion:(id)arg4 ;
+(void)_requestPlaceholderMonogramWithTargetSize:(struct CGSize )arg0 displayScale:(CGFloat)arg1 completion:(id)arg2 ;
+(void)requestImageForContact:(id)arg0 targetSize:(struct CGSize )arg1 displayScale:(CGFloat)arg2 isRTL:(BOOL)arg3 completion:(id)arg4 ;
+(void)requestImageFromPeopleAlbumForPerson:(id)arg0 targetSize:(struct CGSize )arg1 displayScale:(CGFloat)arg2 highQualityFormat:(BOOL)arg3 completion:(id)arg4 ;
+(void)requestMeContactForKeys:(id)arg0 completionHandler:(id)arg1 ;
+(void)requestMeContactWithCompletion:(id)arg0 ;
+(void)requestMonogramForEmailAddress:(id)arg0 targetSize:(struct CGSize )arg1 displayScale:(CGFloat)arg2 isRTL:(BOOL)arg3 completion:(id)arg4 ;
+(void)requestMonogramForGivenName:(id)arg0 familyName:(id)arg1 targetSize:(struct CGSize )arg2 displayScale:(CGFloat)arg3 isRTL:(BOOL)arg4 completion:(id)arg5 ;
+(void)requestPersonImageWithTargetSize:(struct CGSize )arg0 displayScale:(CGFloat)arg1 isRTL:(BOOL)arg2 matchingEmail:(id)arg3 orPhone:(id)arg4 withFirstName:(id)arg5 lastName:(id)arg6 prefersPhotosImage:(BOOL)arg7 withCompletion:(id)arg8 ;


@end


#endif