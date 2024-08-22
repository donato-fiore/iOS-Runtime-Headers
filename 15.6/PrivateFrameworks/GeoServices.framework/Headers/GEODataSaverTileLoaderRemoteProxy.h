// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEODATASAVERTILELOADERREMOTEPROXY_H
#define GEODATASAVERTILELOADERREMOTEPROXY_H

@class NSString;
@protocol GEODataSaverTileLoaderProxy;

#import <Foundation/Foundation.h>


@interface GEODataSaverTileLoaderRemoteProxy : NSObject <GEODataSaverTileLoaderProxy>



@property (readonly, nonatomic, getter=isDataSaverEnabled) BOOL dataSaverEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)_debug_initiateDataSaverPreload;


@end


#endif