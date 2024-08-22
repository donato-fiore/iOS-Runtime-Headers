// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PCSCKKSCREATEIDENTITYOPERATION_H
#define PCSCKKSCREATEIDENTITYOPERATION_H



#import "PCSCKKSOperation.h"
#import "PCSCKKSItemModifyContext.h"

@interface PCSCKKSCreateIdentityOperation : PCSCKKSOperation

@property (retain) PCSCKKSItemModifyContext *context; // ivar: _context


-(?)addAndNotifyOnSync:(?)arg0 attributes:(?)arg1 returnAttributescomplete;
-(id)initWithItemModifyContext:(id)arg0 ;
-(void)createPCSIdentity;
-(void)itemStored:(id)arg0 ;
-(void)setIdentityToCurrent;
-(void)start;
-(void)storePCSIdentity:(struct _PCSIdentityData *)arg0 ;


@end


#endif