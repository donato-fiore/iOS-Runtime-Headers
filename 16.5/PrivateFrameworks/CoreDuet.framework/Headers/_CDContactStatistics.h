// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CDCONTACTSTATISTICS_H
#define _CDCONTACTSTATISTICS_H

@class NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _CDContactStatistics : NSObject <NSSecureCoding>



@property (retain) NSDate *firstIncomingRecipientDate; // ivar: _firstIncomingRecipientDate
@property (retain) NSDate *firstIncomingSenderDate; // ivar: _firstIncomingSenderDate
@property (retain) NSDate *firstOutgoingRecipientDate; // ivar: _firstOutgoingRecipientDate
@property NSUInteger incomingRecipientCount; // ivar: _incomingRecipientCount
@property NSUInteger incomingSenderCount; // ivar: _incomingSenderCount
@property (retain) NSDate *lastIncomingRecipientDate; // ivar: _lastIncomingRecipientDate
@property (retain) NSDate *lastIncomingSenderDate; // ivar: _lastIncomingSenderDate
@property (retain) NSDate *lastOutgoingRecipientDate; // ivar: _lastOutgoingRecipientDate
@property NSUInteger outgoingRecipientCount; // ivar: _outgoingRecipientCount


+(BOOL)supportsSecureCoding;
-(CGFloat)incomingRecipientTimeInterval;
-(CGFloat)incomingSenderTimeInterval;
-(CGFloat)interactionTimeInterval;
-(CGFloat)outgoingRecipientTimeInterval;
-(NSUInteger)interactionCount;
-(id)description;
-(id)firstDate:(id)arg0 updatedWith:(id)arg1 ;
-(id)firstInteractionDate;
-(id)initWithCoder:(id)arg0 ;
-(id)lastDate:(id)arg0 updatedWith:(id)arg1 ;
-(id)lastInteractionDate;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateWithStatistics:(id)arg0 ;


@end


#endif