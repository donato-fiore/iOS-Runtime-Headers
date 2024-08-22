// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC13SOFTPOSREADER25OFFLINEATTESTATIONMANAGER_H
#define _TTC13SOFTPOSREADER25OFFLINEATTESTATIONMANAGER_H

@protocol SPRAttestationManager;

#import <Foundation/Foundation.h>


@interface _TtC13SoftPosReader25OfflineAttestationManager : NSObject <SPRAttestationManager>





-(BOOL)attestWithCheckpoint:(NSInteger)arg0 error:(*id)arg1 ;
-(BOOL)isValidToken:(id)arg0 ;
-(BOOL)refreshAndReturnError:(*id)arg0 ;
-(BOOL)startWithMinimum:(CGFloat)arg0 maximum:(CGFloat)arg1 error:(*id)arg2 ;
-(BOOL)verify;
-(id)getToken;
-(id)init;
-(id)requestTokenAndReturnError:(*id)arg0 ;
-(void)stop;


@end


#endif