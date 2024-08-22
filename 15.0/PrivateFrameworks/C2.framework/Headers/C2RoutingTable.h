// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef C2ROUTINGTABLE_H
#define C2ROUTINGTABLE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface C2RoutingTable : NSObject

@property (retain, nonatomic) NSMutableDictionary *routingTable; // ivar: _routingTable


-(id)copyAndDecorateRequest:(id)arg0 ;
-(id)init;
-(void)updateOriginalHostname:(id)arg0 destinationHostname:(id)arg1 ;


@end


#endif