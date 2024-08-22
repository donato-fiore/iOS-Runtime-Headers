// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOTILEREQUESTER_H
#define GEOTILEREQUESTER_H

@class NSThread, NSString;
@protocol GEOTileRequesterDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "GEOResourceManifestManager.h"
#import "GEOTileRequest.h"

@interface GEOTileRequester : NSObject {
    NSThread *_thread;
}


@property (retain, nonatomic) id *context; // ivar: _context
@property (readonly, weak, nonatomic) NSObject<GEOTileRequesterDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (retain, nonatomic) NSString *deviceCountry; // ivar: _deviceCountry
@property (retain, nonatomic) NSString *deviceRegion; // ivar: _deviceRegion
@property (readonly, nonatomic) GEOResourceManifestManager *resourceManifestManager;
@property (readonly, nonatomic) GEOTileRequest *tileRequest; // ivar: _tileRequest


+(unsigned char)tileProviderIdentifier;
-(id)activeTileSetForKey:(struct _GEOTileKey *)arg0 ;
-(id)init;
-(id)initWithTileRequest:(id)arg0 delegateQueue:(id)arg1 delegate:(id)arg2 ;
// -(unk)tileSetForKey:(id)arg0  ;
-(void)cancel;
-(void)cancelKey:(struct _GEOTileKey *)arg0 ;
-(void)reprioritizeKey:(struct _GEOTileKey *)arg0 newPriority:(unsigned int)arg1 ;
-(void)start;
-(void)tearDown;


@end


#endif