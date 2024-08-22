// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPSCONTEXTUALCONTENTSTATUSEVENT_H
#define TPSCONTEXTUALCONTENTSTATUSEVENT_H

@class NSString;


#import "TPSContextualEvent.h"

@interface TPSContextualContentStatusEvent : TPSContextualEvent

@property (copy, nonatomic) NSString *contentID; // ivar: _contentID
@property (nonatomic) NSInteger statusType; // ivar: _statusType


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithEventIdentifier:(id)arg0 contentIdentifier:(id)arg1 statusType:(NSInteger)arg2 status:(NSInteger)arg3 ;
-(unsigned int)minObservationCount;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateStatusTypeIfOutOfBound;


@end


#endif