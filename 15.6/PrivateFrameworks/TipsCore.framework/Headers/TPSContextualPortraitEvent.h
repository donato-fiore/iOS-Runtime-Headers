// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TPSCONTEXTUALPORTRAITEVENT_H
#define TPSCONTEXTUALPORTRAITEVENT_H

@class NSString;


#import "TPSContextualEvent.h"

@interface TPSContextualPortraitEvent : TPSContextualEvent

@property (nonatomic) CGFloat confidenceThreshold; // ivar: _confidenceThreshold
@property (copy, nonatomic) NSString *topicID; // ivar: _topicID


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(unsigned int)minObservationCount;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif