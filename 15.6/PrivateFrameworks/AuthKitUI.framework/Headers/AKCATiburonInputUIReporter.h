// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AKCATIBURONINPUTUIREPORTER_H
#define AKCATIBURONINPUTUIREPORTER_H



#import "AKCAReporter.h"

@interface AKCATiburonInputUIReporter : AKCAReporter



-(id)initWithRequestID:(id)arg0 ;
-(void)_clearMutuallyExclusiveProperties:(BOOL)arg0 ;
-(void)didComplete:(BOOL)arg0 ;
-(void)didModifyName:(BOOL)arg0 ;
-(void)didSelectAnonymousEmail:(BOOL)arg0 ;
-(void)didSelectAppleID:(BOOL)arg0 ;
-(void)didSelectPasswordCredential:(BOOL)arg0 ;
-(void)didShowAppleID:(BOOL)arg0 ;
-(void)setPasswordCredentialCount:(NSUInteger)arg0 ;


@end


#endif