// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSRAPRECORD_H
#define MSRAPRECORD_H

@class TtC8MapsSync14MapsSyncObject, NSData, NSString, NSDate;


#import "MSCommunityID.h"

@interface MSRAPRecord : TtC8MapsSync14MapsSyncObject {
    ? _clientRevision;
    ? _contentData;
    ? _countryCode;
    ? _positionIndex;
    ? _rapResponse;
    ? _reportId;
    ? _status;
    ? _statusLastUpdatedDate;
    ? _summary;
    ? _type;
}


@property (nonatomic) short clientRevision;
@property (nonatomic, readonly) MSCommunityID *communityID;
@property (nonatomic, copy) NSData *contentData;
@property (nonatomic, copy) NSString *countryCode;
@property (nonatomic) NSInteger positionIndex;
@property (nonatomic, copy) NSData *rapResponse;
@property (nonatomic, copy) NSString *reportId;
@property (nonatomic) short status;
@property (nonatomic, copy) NSDate *statusLastUpdatedDate;
@property (nonatomic, copy) NSString *summary;
@property (nonatomic) short type;


+(Class)managedClass;
-(id)initWithObject:(id)arg0 store:(id)arg1 ;
-(id)initWithStore:(id)arg0 clientRevision:(short)arg1 contentData:(id)arg2 countryCode:(id)arg3 positionIndex:(NSInteger)arg4 rapResponse:(id)arg5 reportId:(id)arg6 status:(short)arg7 statusLastUpdatedDate:(id)arg8 summary:(id)arg9 type:(short)arg10 ;
-(void)setPropertiesUnsafeWithManagedObject:(id)arg0 ;


@end


#endif