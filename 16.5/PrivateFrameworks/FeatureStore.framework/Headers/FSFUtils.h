// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FSFUTILS_H
#define FSFUTILS_H


#import <Foundation/Foundation.h>


@interface FSFUtils : NSObject



+(BOOL)isEnabledOnMacOS;
+(BOOL)isPlatformMacOS;
+(BOOL)isPlatformWatchOS;
+(BOOL)isPlatformiOS;
+(BOOL)isPlatformtvOS;
+(BOOL)isSupportedPlatform;
+(BOOL)isSupportedUser;
+(BOOL)isUnderLegalRestriction;
+(id)availableStreams;
+(id)getBase64EncodedStrFromData:(id)arg0 ;
+(id)getBaseLocalPath;
+(id)getDataFromBase64EncodedStr:(id)arg0 ;
+(id)getStreamPath;
+(id)getStreamURL;


@end


#endif