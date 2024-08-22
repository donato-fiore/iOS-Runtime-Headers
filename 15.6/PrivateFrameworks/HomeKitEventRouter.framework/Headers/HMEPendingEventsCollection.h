// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMEPENDINGEVENTSCOLLECTION_H
#define HMEPENDINGEVENTSCOLLECTION_H

@class NSArray, NSMutableArray;

#import <Foundation/Foundation.h>


@interface HMEPendingEventsCollection : NSObject

@property (readonly, copy, nonatomic) NSArray *eventItems;
@property (retain, nonatomic) NSMutableArray *mutableEventItems; // ivar: _mutableEventItems


-(BOOL)hasEventItem;
-(NSUInteger)eventInfoMaxSizeInBytes:(id)arg0 ;
-(id)init;
-(id)initWithEvents:(id)arg0 ;
-(id)popEventItemsUpWithFragments:(BOOL)arg0 toSizeInBytes:(NSUInteger)arg1 ;
-(void)addEventInfo:(id)arg0 ;
-(void)combinePreviousEvents:(id)arg0 ;
-(void)resetItems;


@end


#endif