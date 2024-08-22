// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DNDMUTABLECLIENTEVENTDETAILS_H
#define DNDMUTABLECLIENTEVENTDETAILS_H

@class NSString;


#import "DNDClientEventDetails.h"
#import "DNDContactHandle.h"

@interface DNDMutableClientEventDetails : DNDClientEventDetails

@property (nonatomic) NSUInteger behavior;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) BOOL notifyAnyway;
@property (copy, nonatomic) DNDContactHandle *sender;
@property (nonatomic) BOOL shouldAlwaysInterrupt;
@property (copy, nonatomic) NSString *threadIdentifier;
@property (nonatomic) NSUInteger type;
@property (nonatomic) NSUInteger urgency;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif