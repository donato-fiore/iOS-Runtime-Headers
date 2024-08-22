// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTROTASOFTWAREUPDATEREQUESTORCLUSTERANNOUNCEOTAPROVIDERPARAMS_H
#define MTROTASOFTWAREUPDATEREQUESTORCLUSTERANNOUNCEOTAPROVIDERPARAMS_H

@class NSNumber, NSData;

#import <Foundation/Foundation.h>


@interface MTROtaSoftwareUpdateRequestorClusterAnnounceOtaProviderParams : NSObject

@property (retain, nonatomic) NSNumber *announcementReason; // ivar: _announcementReason
@property (retain, nonatomic) NSNumber *endpoint; // ivar: _endpoint
@property (retain, nonatomic) NSData *metadataForNode; // ivar: _metadataForNode
@property (retain, nonatomic) NSNumber *providerNodeId; // ivar: _providerNodeId
@property (retain, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs
@property (retain, nonatomic) NSNumber *vendorId; // ivar: _vendorId


-(id)description;
-(id)init;


@end


#endif