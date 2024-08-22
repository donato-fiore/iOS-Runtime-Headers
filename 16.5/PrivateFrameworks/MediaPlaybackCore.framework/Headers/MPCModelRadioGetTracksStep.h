// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPCMODELRADIOGETTRACKSSTEP_H
#define MPCMODELRADIOGETTRACKSSTEP_H

@class ICUserIdentityProperties, NSError, ICRadioGetTracksRequest, ICRadioGetTracksResponse;

#import <Foundation/Foundation.h>


@interface MPCModelRadioGetTracksStep : NSObject

@property (readonly, copy, nonatomic) ICUserIdentityProperties *delegatedIdentityProperties; // ivar: _delegatedIdentityProperties
@property (readonly, copy, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic, getter=isFinished) BOOL finished; // ivar: _finished
@property (readonly, copy, nonatomic) ICUserIdentityProperties *identityProperties; // ivar: _identityProperties
@property (readonly, copy, nonatomic) ICRadioGetTracksRequest *request; // ivar: _request
@property (readonly, copy, nonatomic) ICRadioGetTracksResponse *response; // ivar: _response
@property (readonly, nonatomic) ICRadioGetTracksResponse *siriAssetInfoGetTracksResponse; // ivar: _siriAssetInfoGetTracksResponse


-(id)initWithGetTracksRequest:(id)arg0 siriAssetInfo:(id)arg1 ;
-(id)initWithPreviousStep:(id)arg0 ;
-(id)nextStepWithError:(id)arg0 ;
-(void)_fireAndForgetServerDialog:(id)arg0 ;
-(void)_performDefaultHandlingForButtonAction:(id)arg0 ;
-(void)_presentServerDialog:(id)arg0 completionHandler:(id)arg1 ;
-(void)performWithCompletionHandler:(id)arg0 ;


@end


#endif