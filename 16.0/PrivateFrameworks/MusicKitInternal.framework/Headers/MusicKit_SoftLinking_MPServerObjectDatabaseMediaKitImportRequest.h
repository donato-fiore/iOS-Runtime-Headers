// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUSICKIT_SOFTLINKING_MPSERVEROBJECTDATABASEMEDIAKITIMPORTREQUEST_H
#define MUSICKIT_SOFTLINKING_MPSERVEROBJECTDATABASEMEDIAKITIMPORTREQUEST_H

@class MPServerObjectDatabaseMediaKitImportRequest, NSDate, ICUserIdentity;

#import <Foundation/Foundation.h>


@interface MusicKit_SoftLinking_MPServerObjectDatabaseMediaKitImportRequest : NSObject {
    MPServerObjectDatabaseMediaKitImportRequest *_underlyingImportRequest;
}


@property (readonly, nonatomic) MPServerObjectDatabaseMediaKitImportRequest *_underlyingImportRequest;
@property (copy, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic) id *payload;
@property (retain, nonatomic) ICUserIdentity *userIdentity;


-(id)initWithPayload:(id)arg0 ;


@end


#endif