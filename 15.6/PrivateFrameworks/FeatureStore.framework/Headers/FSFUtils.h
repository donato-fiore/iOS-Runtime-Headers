// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


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
+(id)getBase64EncodedStrFromData:(id)arg0 ;
+(id)getBaseLocalPath;
+(id)getDataFromBase64EncodedStr:(id)arg0 ;
+(id)getStreamPath;
+(id)getStreamURL;


@end


#endif