// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PCSCKKSFETCHCURRENTOPERATION_H
#define PCSCKKSFETCHCURRENTOPERATION_H



#import "PCSCKKSOperation.h"
#import "PCSCKKSItemModifyContext.h"

@interface PCSCKKSFetchCurrentOperation : PCSCKKSOperation

@property (retain) PCSCKKSItemModifyContext *context; // ivar: _context


-(id)initWithItemModifyContext:(id)arg0 ;
-(void)fetchComplete:(id)arg0 point:(id)arg1 error:(id)arg2 ;
-(void)fetchCurrentItem:(id)arg0 viewhint:(id)arg1 complete:(id)arg2 ;
-(void)fetchPersistentRef:(id)arg0 ;
-(void)start;


@end


#endif