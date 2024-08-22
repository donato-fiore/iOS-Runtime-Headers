// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEODATASAVERTILELOADERLOCALPROXY_H
#define GEODATASAVERTILELOADERLOCALPROXY_H

@class NSString;
@protocol GEODataSaverTileLoaderProxy;

#import <Foundation/Foundation.h>


@interface GEODataSaverTileLoaderLocalProxy : NSObject <GEODataSaverTileLoaderProxy>



@property (readonly, nonatomic, getter=isDataSaverEnabled) BOOL dataSaverEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)_debug_initiateDataSaverPreload;
-(void)_removeOldRegionStateFromDisk;


@end


#endif