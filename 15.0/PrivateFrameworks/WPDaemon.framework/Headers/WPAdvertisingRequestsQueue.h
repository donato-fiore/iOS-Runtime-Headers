// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WPADVERTISINGREQUESTSQUEUE_H
#define WPADVERTISINGREQUESTSQUEUE_H

@class NSMutableSet, NSMutableArray;

#import <Foundation/Foundation.h>


@interface WPAdvertisingRequestsQueue : NSObject

@property (retain, nonatomic) NSMutableSet *clientTypes; // ivar: _clientTypes
@property (retain, nonatomic) NSMutableArray *queue; // ivar: _queue


-(BOOL)isAdvertisingForClientType:(unsigned char)arg0 ;
-(NSUInteger)count;
-(id)allRequests;
-(id)init;
-(void)add:(id)arg0 ;
-(void)remove:(id)arg0 ;
-(void)removeAll;
-(void)removeRequestsOfClientType:(unsigned char)arg0 ;


@end


#endif