// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUXMLHTTPREQUESTOPERATION_H
#define SUXMLHTTPREQUESTOPERATION_H

@class ISOperation, SSURLRequestProperties;



@interface SUXMLHTTPRequestOperation : ISOperation {
    id *_outputBlock;
    SSURLRequestProperties *_requestProperties;
}


@property (copy) id *outputBlock;


-(BOOL)_isAllowedURL:(id)arg0 withURLBag:(id)arg1 ;
-(id)initWithRequestProperties:(id)arg0 ;
-(void)run;


@end


#endif