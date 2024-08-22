// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXPROACTIVECDNDOWNLOADER_H
#define ATXPROACTIVECDNDOWNLOADER_H

@protocol ATXProactiveCDNDownloaderProtocol, OS_dispatch_queue, ATXGEOTileDataReaderProtocol, ATXGEOTileLoaderProtocol;

#import <Foundation/Foundation.h>


@interface ATXProactiveCDNDownloader : NSObject <ATXProactiveCDNDownloaderProtocol>



@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) NSObject<ATXGEOTileDataReaderProtocol> *tileDataReader; // ivar: _tileDataReader
@property (readonly, nonatomic) NSObject<ATXGEOTileLoaderProtocol> *tileLoader; // ivar: _tileLoader


-(id)init;
-(id)initWithTileLoader:(id)arg0 tileDataReader:(id)arg1 ;
-(void)_heroDatasForLocation:(id)arg0 completion:(id)arg1 ;
-(void)heroDatasForLocation:(id)arg0 completion:(id)arg1 ;


@end


#endif