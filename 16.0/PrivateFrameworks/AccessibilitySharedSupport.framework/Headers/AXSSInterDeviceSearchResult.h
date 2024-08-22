// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXSSINTERDEVICESEARCHRESULT_H
#define AXSSINTERDEVICESEARCHRESULT_H

@class NSString, MCPeerID;

#import <Foundation/Foundation.h>


@interface AXSSInterDeviceSearchResult : NSObject

@property (copy, nonatomic) NSString *deviceType; // ivar: _deviceType
@property (readonly, nonatomic) NSString *name;
@property (retain, nonatomic) MCPeerID *peerID; // ivar: _peerID


+(id)searchResultWithPeerID:(id)arg0 deviceType:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithPeerID:(id)arg0 deviceType:(id)arg1 ;


@end


#endif