// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPLPULLSESSIONUPDATE_H
#define CPLPULLSESSIONUPDATE_H



#import "CPLChangeSessionUpdate.h"
#import "CPLChangeBatch.h"

@interface CPLPullSessionUpdate : CPLChangeSessionUpdate

@property (readonly, nonatomic) CPLChangeBatch *clientBatch; // ivar: _clientBatch
@property (readonly, nonatomic) CPLChangeBatch *cloudBatch; // ivar: _cloudBatch


+(BOOL)supportsSecureCoding;
-(BOOL)applyToStore:(id)arg0 error:(*id)arg1 ;
-(BOOL)discardFromStore:(id)arg0 error:(*id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStore:(id)arg0 expandedClientBatch:(id)arg1 expandedCloudBatch:(id)arg2 ;
-(id)pendingRecordChangeForClientCacheWithLocalScopedIdentifier:(id)arg0 ;
-(id)statusDescription;
-(id)storageForStatusInStore:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif