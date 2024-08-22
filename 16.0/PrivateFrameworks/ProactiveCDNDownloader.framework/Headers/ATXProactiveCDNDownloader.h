// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXPROACTIVECDNDOWNLOADER_H
#define ATXPROACTIVECDNDOWNLOADER_H

@class CLLocationManager, NSData, NSArray, NSString;
@protocol CLLocationManagerDelegate, ATXProactiveCDNDownloaderProtocol, OS_dispatch_queue, ATXGEOTileDataReaderProtocol, ATXGEOTileLoaderProtocol;

#import <Foundation/Foundation.h>


@interface ATXProactiveCDNDownloader : NSObject <CLLocationManagerDelegate, ATXProactiveCDNDownloaderProtocol>

 {
    CLLocationManager *_locManager;
    NSObject<OS_dispatch_queue> *_clQueue;
    NSData *_previousItemHandle;
    NSArray *_previousPreciseHeroDatas;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<ATXGEOTileDataReaderProtocol> *tileDataReader; // ivar: _tileDataReader
@property (readonly, nonatomic) NSObject<ATXGEOTileLoaderProtocol> *tileLoader; // ivar: _tileLoader


-(id)init;
-(id)initWithTileLoader:(id)arg0 tileDataReader:(id)arg1 ;
-(id)sha256HashForText:(id)arg0 ;
-(void)_heroDatasForLocation:(id)arg0 completion:(id)arg1 ;
-(void)heroDatasForLocation:(id)arg0 completion:(id)arg1 ;
-(void)highConfidenceHeroDatasForCurrentLocationWithCompletion:(id)arg0 ;


@end


#endif