// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPCMODELRADIOGETTRACKSOPERATION_H
#define MPCMODELRADIOGETTRACKSOPERATION_H

@class MPAsyncOperation, ICRadioGetTracksRequest, NSString;



@interface MPCModelRadioGetTracksOperation : MPAsyncOperation {
    ICRadioGetTracksRequest *_request;
    NSString *_siriAssetInfo;
    *void _radioQueueFeederPointerForLogging;
}


@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler


-(id)_cacheTracksForStep:(id)arg0 ;
-(id)initWithGetTracksRequest:(id)arg0 siriAssetInfo:(id)arg1 radioQueueFeeder:(id)arg2 ;
-(void)_runStep:(id)arg0 withFinishHandler:(id)arg1 ;
-(void)execute;


@end


#endif