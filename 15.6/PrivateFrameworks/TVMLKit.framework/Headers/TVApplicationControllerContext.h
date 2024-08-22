// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TVAPPLICATIONCONTROLLERCONTEXT_H
#define TVAPPLICATIONCONTROLLERCONTEXT_H

@class NSURL, NSString, NSDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TVApplicationControllerContext : NSObject <NSCopying>



@property (copy, nonatomic) NSURL *appJSCachePath; // ivar: _appJSCachePath
@property (copy, nonatomic) NSURL *appLocalJSURL; // ivar: _appLocalJSURL
@property (copy, nonatomic) NSString *bagBootURLKey; // ivar: _bagBootURLKey
@property (copy, nonatomic) NSURL *javaScriptApplicationURL; // ivar: _javaScriptApplicationURL
@property (copy, nonatomic) NSDictionary *launchOptions; // ivar: _launchOptions
@property (copy, nonatomic) NSURL *offlineJSURL; // ivar: _offlineJSURL
@property (copy, nonatomic) NSString *storageIdentifier; // ivar: _storageIdentifier
@property (nonatomic, getter=isSupplementary) BOOL supplementary; // ivar: _supplementary
@property (nonatomic) BOOL supportsPictureInPicturePlayback; // ivar: _supportsPictureInPicturePlayback


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif