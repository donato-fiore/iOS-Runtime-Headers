// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKAPPLAUNCHCONTROLLER_H
#define MKAPPLAUNCHCONTROLLER_H

@class NSString, NSURL;

#import <Foundation/Foundation.h>


@interface MKAppLaunchController : NSObject {
    NSString *_webURLString;
}


@property (retain, nonatomic) NSURL *webURL; // ivar: webURL


+(id)sharedController;
+(void)launchAttributionURLs:(id)arg0 withAttribution:(id)arg1 completionHandler:(id)arg2 ;
+(void)launchAttributionURLs:(id)arg0 withAttribution:(id)arg1 usingTarget:(int)arg2 completionHandler:(id)arg3 ;
-(void)lookUpAppStoreURLForBundle:(id)arg0 usingTarget:(int)arg1 completionHandler:(id)arg2 ;


@end


#endif