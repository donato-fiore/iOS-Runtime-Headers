// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALLRECORD_H
#define CALLRECORD_H

@class NSManagedObject, NSString, NSNumber, NSSet, NSDate, NSURL, NSUUID;


#import "CHRecentCall.h"

@interface CallRecord : NSManagedObject

@property (copy, nonatomic) NSString *address;
@property (copy, nonatomic) NSNumber *answered;
@property (copy, nonatomic) NSNumber *call_category;
@property (copy, nonatomic) NSNumber *calltype;
@property (nonatomic) unsigned int chCallStatus;
@property (readonly, nonatomic) NSInteger chHandleType;
@property (readonly, nonatomic) CHRecentCall *chRecentCall;
@property (readonly, copy, nonatomic) NSSet *chRemoteParticipantHandles;
@property (copy, nonatomic) NSDate *date;
@property (copy, nonatomic) NSNumber *disconnected_cause;
@property (copy, nonatomic) NSNumber *duration;
@property (copy, nonatomic) NSNumber *face_time_data;
@property (copy, nonatomic) NSNumber *filtered_out_reason;
@property (copy, nonatomic) NSNumber *handle_type;
@property (copy, nonatomic) NSURL *imageURL;
@property (copy, nonatomic) NSString *iso_country_code;
@property (copy, nonatomic) NSNumber *junkConfidence;
@property (copy, nonatomic) NSUUID *localParticipantUUID;
@property (copy, nonatomic) NSString *location;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSNumber *number_availability;
@property (copy, nonatomic) NSNumber *originated;
@property (copy, nonatomic) NSUUID *outgoingLocalParticipantUUID;
@property (copy, nonatomic) NSUUID *participantGroupUUID;
@property (copy, nonatomic) NSNumber *read;
@property (retain, nonatomic) NSSet *remoteParticipantHandles;
@property (copy, nonatomic) NSString *service_provider;
@property (readonly, nonatomic) BOOL supportsCallCategory;
@property (readonly, nonatomic) BOOL supportsHandleType;
@property (readonly, nonatomic) BOOL supportsImageURL;
@property (readonly, nonatomic) BOOL supportsLocalParticipantUUID;
@property (readonly, nonatomic) BOOL supportsOutgoingLocalParticipantUUID;
@property (readonly, nonatomic) BOOL supportsParticipantGroupUUID;
@property (readonly, nonatomic) BOOL supportsRemoteParticipantHandles;
@property (readonly, nonatomic) BOOL supportsServiceProvider;
@property (readonly, nonatomic) BOOL supportsVerificationStatus;
@property (copy, nonatomic) NSString *unique_id;
@property (copy, nonatomic) NSNumber *verificationStatus;


+(id)fetchRequest;
-(BOOL)supportsJunkConfidence;
-(id)compositeCallCategoryForContext:(id)arg0 ;
-(id)compositeHandleTypeForContext:(id)arg0 ;
-(id)compositeJunkConfidenceForContext:(id)arg0 ;
-(id)compositeLocalParticipantUUIDForContext:(id)arg0 ;
-(id)compositeOutgoingLocalParticipantUUIDForContext:(id)arg0 ;
-(id)compositeParticipantGroupUUIDForContext:(id)arg0 ;
-(id)compositeRemoteParticipantHandlesForContext:(id)arg0 ;
-(id)compositeServiceProviderForContext:(id)arg0 ;
-(id)compositeVerificationStatusForContext:(id)arg0 ;


@end


#endif