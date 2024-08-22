// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PCSCKKSENSUREPCSFIELDSOPERATION_H
#define PCSCKKSENSUREPCSFIELDSOPERATION_H



#import "PCSCKKSOperation.h"
#import "PCSCKKSItemModifyContext.h"

@interface PCSCKKSEnsurePCSFieldsOperation : PCSCKKSOperation

@property (retain) PCSCKKSItemModifyContext *context; // ivar: _context


-(BOOL)haveCKKSPlaintextEntitlements;
-(id)initWithItemModifyContext:(id)arg0 ;
-(int)updateKeychain:(id)arg0 withAttributes:(id)arg1 ;
-(void)start;


@end


#endif