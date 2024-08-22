// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOTOOLREQUESTER_H
#define GEOTOOLREQUESTER_H

@protocol GEOToolProxy;

#import <Foundation/Foundation.h>


@interface GEOToolRequester : NSObject <GEOToolProxy>





+(id)sharedRequester;
-(BOOL)notifyNetworkDefaultsChanged;
-(NSUInteger)calculatePurgableSpaceForUrgency:(int)arg0 ;
-(NSUInteger)freePurgableSpace:(NSUInteger)arg0 forUrgency:(int)arg1 ;
-(id)getDefault:(id)arg0 source:(*NSInteger)arg1 ;
-(id)ping;
-(void)invalidateTileCache;
-(void)lockDBs;
-(void)unlockDBs;


@end


#endif