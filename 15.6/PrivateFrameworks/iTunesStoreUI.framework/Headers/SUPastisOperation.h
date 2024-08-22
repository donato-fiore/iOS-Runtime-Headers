// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUPASTISOPERATION_H
#define SUPASTISOPERATION_H

@class ISOperation, NSURL, AVAssetResourceLoadingRequest;



@interface SUPastisOperation : ISOperation

@property (retain, nonatomic) NSURL *certificateURL; // ivar: _certificateUrl
@property (retain, nonatomic) NSURL *keyURL; // ivar: _keyUrl
@property (retain, nonatomic) AVAssetResourceLoadingRequest *loadingRequest; // ivar: _loadingRequest


-(id)_getAppCertWithError:(*id)arg0 ;
-(id)_getCKCForSPC:(id)arg0 URI:(id)arg1 error:(*id)arg2 ;
-(id)_getURIWithError:(*id)arg0 ;
-(void)dealloc;
-(void)run;


@end


#endif