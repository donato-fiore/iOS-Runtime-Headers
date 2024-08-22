// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHMAKERESOURCEAVAILABLEREQUEST_H
#define PHMAKERESOURCEAVAILABLEREQUEST_H

@protocol PLResourceIdentity;


#import "PHResourceRequest.h"

@interface PHMakeResourceAvailableRequest : PHResourceRequest

@property (nonatomic) NSInteger downloadIntent; // ivar: _downloadIntent
@property (nonatomic) NSInteger downloadPriority; // ivar: _downloadPriority
@property (nonatomic, getter=isNetworkAccessAllowed) BOOL networkAccessAllowed; // ivar: _networkAccessAllowed
@property (readonly, nonatomic) NSObject<PLResourceIdentity> *resourceIdentity; // ivar: _resourceIdentity
@property (nonatomic, getter=isTransient) BOOL transient; // ivar: _transient


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTaskIdentifier:(id)arg0 assetObjectID:(id)arg1 resource:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif