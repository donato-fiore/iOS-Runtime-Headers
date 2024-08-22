// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NWSSNAPSHOTSOURCE_H
#define NWSSNAPSHOTSOURCE_H


#import <Foundation/Foundation.h>


@interface NWSSnapshotSource : NSObject {
    int _sockFd;
}




+(id)routeSnapshotForIPv4Host:(struct sockaddr_in *)arg0 viaInterfaceIndex:(int)arg1 ;
+(id)routeSnapshotForIPv6Host:(struct sockaddr_in6 *)arg0 viaInterfaceIndex:(int)arg1 ;
-(NSInteger)recv:(*void)arg0 length:(NSUInteger)arg1 err:(*int)arg2 ;
-(NSInteger)send:(*void)arg0 length:(NSUInteger)arg1 err:(*int)arg2 ;
-(id)init;
-(void)dealloc;


@end


#endif