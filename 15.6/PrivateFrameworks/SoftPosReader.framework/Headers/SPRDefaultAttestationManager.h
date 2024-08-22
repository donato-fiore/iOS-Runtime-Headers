// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SPRDEFAULTATTESTATIONMANAGER_H
#define SPRDEFAULTATTESTATIONMANAGER_H

@protocol SPRAttestationManager;

#import <Foundation/Foundation.h>


@interface SPRDefaultAttestationManager : NSObject <SPRAttestationManager>

 {
    ? id;
    ? signer;
    ? timeKeeper;
    ? secureService;
    ? challenge;
    ? persisting;
    ? checks;
    ? entries;
    ? reporter;
    ? baseline;
    ? errorParser;
    ? monitorProxy;
    ? analyticsProxy;
    ? started;
    ? timer;
    ? attestationToken;
}




-(BOOL)attestWithCheckpoint:(NSInteger)arg0 error:(*id)arg1 ;
-(BOOL)isValidToken:(id)arg0 ;
-(BOOL)refreshAndReturnError:(*id)arg0 ;
-(BOOL)startWithMinimum:(CGFloat)arg0 maximum:(CGFloat)arg1 error:(*id)arg2 ;
-(BOOL)verify;
-(id)getToken;
-(id)init;
-(id)initWithUrl:(id)arg0 persisting:(id)arg1 secureChannel:(id)arg2 monitor:(id)arg3 ;
-(id)requestTokenAndReturnError:(*id)arg0 ;
-(void)dealloc;
-(void)stop;


@end


#endif