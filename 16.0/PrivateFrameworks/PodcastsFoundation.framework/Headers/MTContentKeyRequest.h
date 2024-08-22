// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTCONTENTKEYREQUEST_H
#define MTCONTENTKEYREQUEST_H

@class NSString, NSData, NSNumber;

#import <Foundation/Foundation.h>


@interface MTContentKeyRequest : NSObject {
    ? keyIdentifier;
    ? adamId;
    ? requestData;
    ? requestType;
    ? offlineRequest;
    ? requestDate;
    ? requestID;
}


@property (nonatomic, readonly) NSString *adamId;
@property (nonatomic, readonly) NSString *keyIdentifier;
@property (nonatomic, copy) NSData *requestData;
@property (nonatomic, readonly) NSNumber *secureInvalidationDsid; // ivar: secureInvalidationDsid


-(id)copyWith:(NSInteger)arg0 ;
-(id)init;
-(id)initFrom:(id)arg0 adamId:(id)arg1 requestType:(NSInteger)arg2 offlineRequest:(BOOL)arg3 ;
-(id)initWithKeyIdentifier:(id)arg0 adamId:(id)arg1 requestType:(NSInteger)arg2 offlineRequest:(BOOL)arg3 secureInvalidationDsid:(id)arg4 ;


@end


#endif