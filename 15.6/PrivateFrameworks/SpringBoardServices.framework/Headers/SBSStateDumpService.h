// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBSSTATEDUMPSERVICE_H
#define SBSSTATEDUMPSERVICE_H



#import "SBSAbstractSystemService.h"

@interface SBSStateDumpService : SBSAbstractSystemService



-(void)disableRemoteStateDumpWithCompletion:(id)arg0 ;
-(void)enableRemoteStateDumpWithTimeout:(NSInteger)arg0 completion:(id)arg1 ;
-(void)requestStateDump:(NSUInteger)arg0 withCompletion:(id)arg1 ;


@end


#endif