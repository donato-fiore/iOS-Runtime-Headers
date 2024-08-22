// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SPRATTESTATIONMANAGER_H
#define SPRATTESTATIONMANAGER_H



#import "SPRObject.h"

@interface SPRAttestationManager : SPRObject



-(BOOL)attestWithCheckpoint:(NSInteger)arg0 error:(*id)arg1 ;
-(BOOL)isValidToken:(id)arg0 ;
-(BOOL)ping;
-(BOOL)refreshAndReturnError:(*id)arg0 ;
-(BOOL)start;
-(BOOL)startWithMinimum:(CGFloat)arg0 maximum:(CGFloat)arg1 error:(*id)arg2 ;
-(BOOL)stop;
-(BOOL)verify;
-(BOOL)verifyWithRenewalPeriod:(CGFloat)arg0 ;
-(id)getToken;
-(id)requestTokenAndReturnError:(*id)arg0 ;


@end


#endif