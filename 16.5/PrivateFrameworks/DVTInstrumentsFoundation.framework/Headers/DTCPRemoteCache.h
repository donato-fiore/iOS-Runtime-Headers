// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DTCPREMOTECACHE_H
#define DTCPREMOTECACHE_H


#import <Foundation/Foundation.h>


@interface DTCPRemoteCache : NSObject {
    *id _locks;
}




+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)kindToString:(NSInteger)arg0 ;
+(id)sharedDTCPRemoteCache;
-(BOOL)accessFileKind:(NSInteger)arg0 device:(id)arg1 fileType:(id)arg2 block:(id)arg3 ;
-(id)_directoryForDevice:(id)arg0 ;
-(id)_filePathForKind:(NSInteger)arg0 fileType:(id)arg1 directoryURL:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)dealloc;


@end


#endif