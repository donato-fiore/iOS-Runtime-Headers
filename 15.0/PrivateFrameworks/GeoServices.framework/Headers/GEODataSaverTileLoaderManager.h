// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEODATASAVERTILELOADERMANAGER_H
#define GEODATASAVERTILELOADERMANAGER_H

@class NSString;
@protocol GEODataSaverTileLoaderProxy;

#import <Foundation/Foundation.h>


@interface GEODataSaverTileLoaderManager : NSObject <GEODataSaverTileLoaderProxy>

 {
    id<GEODataSaverTileLoaderProxy> *_proxy;
}


@property (readonly, nonatomic, getter=isDataSaverEnabled) BOOL dataSaverEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedManager;
+(void)useProxyClass:(Class)arg0 ;
-(id)init;
-(void)_debug_initiateDataSaverPreload;


@end


#endif