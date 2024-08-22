// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DNDSEVENTBEHAVIORRESOLUTION_H
#define DNDSEVENTBEHAVIORRESOLUTION_H

@class NSUUID, NSString, NSDate, DNDClientEventBehavior;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface DNDSEventBehaviorResolution : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSUUID *UUID; // ivar: _UUID
@property (readonly, copy, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (readonly, copy, nonatomic) NSDate *date; // ivar: _date
@property (readonly, copy, nonatomic) DNDClientEventBehavior *eventBehavior; // ivar: _eventBehavior
@property (readonly, nonatomic) NSUInteger outcome; // ivar: _outcome
@property (readonly, nonatomic) NSUInteger reason; // ivar: _reason


+(id)resolutionForDate:(id)arg0 eventBehavior:(id)arg1 clientIdentifier:(id)arg2 outcome:(NSUInteger)arg3 reason:(NSUInteger)arg4 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_descriptionForRedacted:(BOOL)arg0 ;
-(id)_initWithUUID:(id)arg0 date:(id)arg1 eventBehavior:(id)arg2 clientIdentifier:(id)arg3 outcome:(NSUInteger)arg4 reason:(NSUInteger)arg5 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)redactedDescription;


@end


#endif