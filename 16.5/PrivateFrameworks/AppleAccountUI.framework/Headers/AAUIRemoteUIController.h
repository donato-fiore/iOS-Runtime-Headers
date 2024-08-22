// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AAUIREMOTEUICONTROLLER_H
#define AAUIREMOTEUICONTROLLER_H

@class RemoteUIController, NSURLRequest, NSString, NSHTTPURLResponse;



@interface AAUIRemoteUIController : RemoteUIController

@property (readonly, nonatomic) NSURLRequest *currentRequest; // ivar: _currentRequest
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSHTTPURLResponse *redirectResponse; // ivar: _redirectResponse


-(id)description;
-(id)init;
-(id)initWithIdentifier:(id)arg0 ;
-(id)loader:(id)arg0 connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3 ;
-(id)loader:(id)arg0 willLoadRequest:(id)arg1 redirectResponse:(id)arg2 ;
-(void)_loader:(id)arg0 didReceiveChallenge:(id)arg1 completionHandler:(id)arg2 ;
-(void)loader:(id)arg0 didFinishLoadWithError:(id)arg1 ;
-(void)loader:(id)arg0 didReceiveChallenge:(id)arg1 completionHandler:(id)arg2 ;
-(void)loader:(id)arg0 didReceiveHTTPResponse:(id)arg1 ;
-(void)loader:(id)arg0 willLoadRequest:(id)arg1 redirectResponse:(id)arg2 completionHandler:(id)arg3 ;


@end


#endif