// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WKWALLPAPERMIGRATOR_H
#define WKWALLPAPERMIGRATOR_H

@class NSXPCConnection;
@protocol WKWallpaperMigratorProtocol;

#import <Foundation/Foundation.h>


@interface WKWallpaperMigrator : NSObject <WKWallpaperMigratorProtocol>



@property (retain, nonatomic) NSXPCConnection *_serviceConnection; // ivar: __serviceConnection


+(id)defaultMigrator;
-(id)init;
-(void)_setupServiceConnection;
-(void)dealloc;
-(void)migrateLegacyWallpaperIfNeededWithCompletion:(id)arg0 ;
-(void)resetWallpaperKitStateWithCompletion:(id)arg0 ;


@end


#endif