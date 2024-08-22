// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFUIACTIVITYIMAGEPROVIDER_H
#define SFUIACTIVITYIMAGEPROVIDER_H



#import "SFUIImageProvider.h"

@interface SFUIActivityImageProvider : SFUIImageProvider



-(id)_fetchActionImageForActivity:(id)arg0 contentSizeCategory:(id)arg1 imageSymbolConfiguration:(id)arg2 ;
-(int)requestImageForActivity:(id)arg0 contentSizeCategory:(id)arg1 imageSymbolConfiguration:(id)arg2 resultHandler:(id)arg3 ;
-(int)requestImageForActivity:(id)arg0 contentSizeCategory:(id)arg1 imageSymbolConfiguration:(id)arg2 synchronous:(BOOL)arg3 resultHandler:(id)arg4 ;
-(int)requestImageForBundleIdentifier:(id)arg0 activityCategory:(NSInteger)arg1 contentSizeCategory:(id)arg2 resultHandler:(id)arg3 ;
-(int)requestImageForBundleIdentifier:(id)arg0 activityCategory:(NSInteger)arg1 contentSizeCategory:(id)arg2 synchronous:(BOOL)arg3 resultHandler:(id)arg4 ;
-(void)_fetchBundleImageForBundleIdentifier:(id)arg0 activityCategory:(NSInteger)arg1 contentSizeCategory:(id)arg2 ;
-(void)_fetchImageForActivity:(id)arg0 contentSizeCategory:(id)arg1 imageSymbolConfiguration:(id)arg2 ;
-(void)_handleIconImage:(id)arg0 bundleIdentifier:(id)arg1 activityCategory:(NSInteger)arg2 contentSizeCategory:(id)arg3 placeholder:(BOOL)arg4 ;
-(void)performImageRequest:(id)arg0 ;


@end


#endif