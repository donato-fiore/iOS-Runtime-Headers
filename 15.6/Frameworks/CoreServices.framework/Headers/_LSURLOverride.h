// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _LSURLOVERRIDE_H
#define _LSURLOVERRIDE_H

@class NSURL;

#import <Foundation/Foundation.h>


@interface _LSURLOverride : NSObject

@property (readonly, nonatomic) NSURL *originalURL; // ivar: _originalURL
@property (readonly, copy, nonatomic) NSURL *overrideURL; // ivar: _overrideURL


+(id)booksStoreAuthorizationURL:(struct State *)arg0 ;
+(id)fmfURL:(struct State *)arg0 ;
+(id)fmipURL:(struct State *)arg0 ;
+(id)iCloudEmailPrefsURL:(struct State *)arg0 ;
+(id)iCloudFamilyURL:(struct State *)arg0 ;
+(id)iCloudSchoolworkURL:(struct State *)arg0 ;
+(id)iTunesStoreURL:(struct State *)arg0 ;
+(id)keynoteLiveURL:(struct State *)arg0 ;
+(id)keynoteLiveURL_noFragment:(struct State *)arg0 ;
+(id)new;
+(id)photosURL:(struct State *)arg0 ;
+(void)addOverrideBlock:(id)arg0 ;
+(void)removeAllOverrideBlocks;
+(void)resetPlatformFlag;
+(void)setUseMacOverrides:(BOOL)arg0 ;
-(id)init;
-(id)initWithOriginalURL:(id)arg0 ;
-(id)initWithOriginalURL:(id)arg0 checkingForAvailableApplications:(BOOL)arg1 ;


@end


#endif