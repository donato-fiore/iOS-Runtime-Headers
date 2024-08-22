// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STICONCACHE_H
#define STICONCACHE_H

@class NSCache, NSMutableSet, UIImage, CNMonogrammer, NSPersonNameComponentsFormatter, NSURLSession;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface STIconCache : NSObject {
    NSCache *_iconByKeyCache;
}


@property (readonly, nonatomic) NSMutableSet *bundleIdentifiersWithPendingRequests; // ivar: _bundleIdentifiersWithPendingRequests
@property (readonly) UIImage *imageForBlankApplicationIcon;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *lookupQueue; // ivar: _lookupQueue
@property (retain, nonatomic) CNMonogrammer *monogrammer; // ivar: _monogrammer
@property (retain, nonatomic) NSPersonNameComponentsFormatter *personNameComponentsFormatter; // ivar: _personNameComponentsFormatter
@property (readonly, nonatomic) NSURLSession *urlSession; // ivar: _urlSession


+(id)sharedCache;
-(id)_newCircleImageWithFillColor:(id)arg0 fillDiameter:(CGFloat)arg1 outlineColor:(id)arg2 outlineWidth:(CGFloat)arg3 ;
-(id)_personImageWithDSID:(id)arg0 fullName:(id)arg1 appleID:(id)arg2 forceFetch:(BOOL)arg3 completionHandler:(id)arg4 ;
-(id)blankSpaceImageWithSize:(struct CGSize )arg0 ;
-(id)circleImageWithFillColor:(id)arg0 fillDiameter:(CGFloat)arg1 outlineColor:(id)arg2 outlineWidth:(CGFloat)arg3 ;
-(id)imageForBundleIdentifier:(id)arg0 ;
-(id)imageForCategoryIdentifier:(id)arg0 ;
-(id)init;
-(id)monogramImageForInitial:(id)arg0 useDarkColors:(BOOL)arg1 ;
-(id)monogramImageForNameComponents:(id)arg0 ;
-(id)personImageWithDSID:(id)arg0 fullName:(id)arg1 ;
-(id)roundedImageForImageWithName:(id)arg0 ;
-(void)_fetchFamilyPhotoWithDSID:(id)arg0 fullName:(id)arg1 appleID:(id)arg2 completionHandler:(id)arg3 ;
-(void)_fetchImageForAppInfoIfNeeded:(id)arg0 ;
-(void)_fetchImageForAppInfoIfNeeded:(id)arg0 completionHandler:(id)arg1 ;
-(void)_handleiTunesResponseForAppInfo:(id)arg0 response:(id)arg1 data:(id)arg2 error:(id)arg3 ;
-(void)_handleiTunesResponseForAppInfo:(id)arg0 response:(id)arg1 data:(id)arg2 error:(id)arg3 completionHandler:(id)arg4 ;
-(void)_updateCacheWithImage:(id)arg0 bundleIdentifier:(id)arg1 ;
-(void)_updateCacheWithImage:(id)arg0 dsid:(id)arg1 ;
-(void)addObserver:(id)arg0 selector:(SEL)arg1 bundleIdentifier:(id)arg2 ;
-(void)dealloc;
-(void)fetchPersonImageWithDSID:(id)arg0 fullName:(id)arg1 appleID:(id)arg2 forceFetch:(BOOL)arg3 completionHandler:(id)arg4 ;
-(void)imageForBundleIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeObserver:(id)arg0 bundleIdentifier:(id)arg1 ;


@end


#endif