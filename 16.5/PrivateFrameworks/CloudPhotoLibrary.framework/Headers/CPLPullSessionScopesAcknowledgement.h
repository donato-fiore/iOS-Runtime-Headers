// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPLPULLSESSIONSCOPESACKNOWLEDGEMENT_H
#define CPLPULLSESSIONSCOPESACKNOWLEDGEMENT_H



#import "CPLChangeSessionUpdate.h"
#import "CPLChangeBatch.h"

@interface CPLPullSessionScopesAcknowledgement : CPLChangeSessionUpdate

@property (readonly, nonatomic) CPLChangeBatch *scopesChangeBatch; // ivar: _scopesChangeBatch


+(BOOL)supportsSecureCoding;
-(BOOL)applyToStore:(id)arg0 error:(*id)arg1 ;
-(BOOL)discardFromStore:(id)arg0 error:(*id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStore:(id)arg0 scopesChangeBatch:(id)arg1 ;
-(id)statusDescription;
-(id)storageForStatusInStore:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif