// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPSCLIPURL_H
#define CPSCLIPURL_H

@class NSURL;

#import <Foundation/Foundation.h>


@interface CPSClipURL : NSObject

@property (readonly, nonatomic) NSURL *URL; // ivar: _URL


+(BOOL)isSupported;
+(BOOL)shouldStallProgress;
+(BOOL)usesDemoMetadata;
+(void)stopStallingCurrentInstallationWithCompletionHandler:(id)arg0 ;
-(id)initWithURL:(id)arg0 ;
-(void)cancelPrewarmingClipWithCompletionHandler:(id)arg0 ;
-(void)checkAvailabilityWithCompletionHandler:(id)arg0 ;
-(void)fetchClipMetadataWithCompletionHandler:(id)arg0 ;
-(void)installClipWithCompletionHandler:(id)arg0 ;
-(void)openWithCompletionHandler:(id)arg0 ;
-(void)prewarmClipWithCompletionHandler:(id)arg0 ;
-(void)test_uninstallClipWithCompletionHandler:(id)arg0 ;


@end


#endif