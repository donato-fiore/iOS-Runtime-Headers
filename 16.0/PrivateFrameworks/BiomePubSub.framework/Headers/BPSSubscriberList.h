// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BPSSUBSCRIBERLIST_H
#define BPSSUBSCRIBERLIST_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface BPSSubscriberList : NSObject

@property (retain, nonatomic) NSMutableArray *items; // ivar: _items
@property (nonatomic) NSInteger nextTicket; // ivar: _nextTicket
@property (retain, nonatomic) NSMutableArray *tickets; // ivar: _tickets


-(NSInteger)appendElement:(id)arg0 ;
-(id)claimAll;
-(id)init;
-(void)removeTicket:(NSInteger)arg0 ;


@end


#endif