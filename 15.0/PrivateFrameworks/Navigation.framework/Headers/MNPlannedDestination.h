// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MNPLANNEDDESTINATION_H
#define MNPLANNEDDESTINATION_H

@class NSString, GEOComposedWaypoint, NSDate, NSUUID;
@protocol MNJSONOutput, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "_MNTimepointAndTransportType.h"
#import "MNTimepoint.h"

@interface MNPlannedDestination : NSObject <MNJSONOutput, NSSecureCoding, NSCopying>



@property (readonly, nonatomic) _MNTimepointAndTransportType *_internalTimepoint; // ivar: _internalTimepoint
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) GEOComposedWaypoint *destinationWaypoint; // ivar: _destinationWaypoint
@property (copy, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (readonly, nonatomic, getter=isExpired) BOOL expired;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) MNTimepoint *timepoint;
@property (nonatomic) int transportType;
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid


+(BOOL)supportsSecureCoding;
+(id)destinationFromArchiveData:(id)arg0 ;
-(BOOL)isDuplicateOf:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)archiveData;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithWaypoint:(id)arg0 transportType:(int)arg1 ;
-(id)jsonDictionary;
-(id)uniqueIdentifier;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif