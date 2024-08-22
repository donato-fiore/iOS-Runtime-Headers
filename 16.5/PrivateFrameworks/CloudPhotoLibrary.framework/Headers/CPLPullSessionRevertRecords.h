// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPLPULLSESSIONREVERTRECORDS_H
#define CPLPULLSESSIONREVERTRECORDS_H



#import "CPLChangeSessionUpdate.h"
#import "CPLChangeBatch.h"

@interface CPLPullSessionRevertRecords : CPLChangeSessionUpdate

@property (readonly, nonatomic) CPLChangeBatch *revertedChangesBatch; // ivar: _revertedChangesBatch


+(BOOL)supportsSecureCoding;
-(BOOL)applyToStore:(id)arg0 error:(*id)arg1 ;
-(BOOL)discardFromStore:(id)arg0 error:(*id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStore:(id)arg0 revertedChangesBatch:(id)arg1 ;
-(id)statusDescription;
-(id)storageForStatusInStore:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif