// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PCSCKKSFETCHCURRENTOPERATION_H
#define PCSCKKSFETCHCURRENTOPERATION_H



#import "PCSCKKSOperation.h"
#import "PCSCKKSItemModifyContext.h"

@interface PCSCKKSFetchCurrentOperation : PCSCKKSOperation

@property (retain) PCSCKKSItemModifyContext *context; // ivar: _context


-(id)initWithItemModifyContext:(id)arg0 ;
-(void)fetchComplete:(struct __CFData *)arg0 point:(id)arg1 error:(struct __CFError *)arg2 ;
-(void)fetchCurrentItem:(id)arg0 viewhint:(id)arg1 complete:(id)arg2 ;
-(void)fetchPersistentRef:(id)arg0 ;
-(void)start;


@end


#endif