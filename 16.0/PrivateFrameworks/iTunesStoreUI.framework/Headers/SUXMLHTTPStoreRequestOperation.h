// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUXMLHTTPSTOREREQUESTOPERATION_H
#define SUXMLHTTPSTOREREQUESTOPERATION_H

@class ISOperation, SSURLRequestProperties, SSAuthenticationContext, ISDataProvider;



@interface SUXMLHTTPStoreRequestOperation : ISOperation {
    id *_outputBlock;
    SSURLRequestProperties *_requestProperties;
}


@property (retain, nonatomic) SSAuthenticationContext *authenticationContext; // ivar: _authenticationContext
@property (retain, nonatomic) ISDataProvider *dataProvider; // ivar: _dataProvider
@property (copy) id *outputBlock;


-(id)initWithRequestProperties:(id)arg0 ;
-(void)run;


@end


#endif