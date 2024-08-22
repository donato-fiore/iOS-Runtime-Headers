// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCFDBFEED_H
#define FCFDBFEED_H

@class NSManagedObject, NSString, NSNumber, NSDate, NSOrderedSet;



@interface FCFDBFeed : NSManagedObject

@property (retain, nonatomic) NSString *feedID;
@property (nonatomic) NSNumber *lookupID;
@property (retain, nonatomic) NSDate *refreshDate;
@property (nonatomic) NSUInteger refreshedToOrder;
@property (retain, nonatomic) NSOrderedSet *segments;


-(id)contiguousRangeInRange:(id)arg0 ;
-(id)contiguousSegmentsInFeedRange:(id)arg0 ;
-(id)firstSegmentFollowingCursor:(id)arg0 ;
-(id)lastSegmentPrecedingCursor:(id)arg0 ;
-(id)prune;
-(void)_visitContiguousSegmentsInRange:(id)arg0 withBlock:(id)arg1 ;
-(void)awakeFromFetch;
-(void)enumerateGapsWithBlock:(id)arg0 ;
-(void)insertFeedItems:(id)arg0 ckCursor:(id)arg1 plausibleRange:(id)arg2 segmentEntity:(id)arg3 itemEntity:(id)arg4 itemIndexEntity:(id)arg5 moc:(id)arg6 indexFeatures:(BOOL)arg7 ;
-(void)insertSegment:(id)arg0 ;
-(void)willAccessFeedRange:(id)arg0 ;
-(void)willTurnIntoFault;


@end


#endif