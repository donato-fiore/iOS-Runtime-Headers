// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DCDOCUMENTCAMERAVIEWSERVICESESSION_H
#define DCDOCUMENTCAMERAVIEWSERVICESESSION_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "ICDocCamImageCache.h"
#import "DCDocumentCameraViewServiceSessionRequest.h"

@interface DCDocumentCameraViewServiceSession : NSObject <NSSecureCoding>



@property (readonly, nonatomic) ICDocCamImageCache *docCamImageCache; // ivar: _docCamImageCache
@property (readonly, nonatomic) DCDocumentCameraViewServiceSessionRequest *sessionRequest; // ivar: _sessionRequest
@property (readonly, nonatomic) int viewServicePid; // ivar: _viewServicePid


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSessionRequest:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setup;


@end


#endif