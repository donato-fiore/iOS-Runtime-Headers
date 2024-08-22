// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IKURLCONNECTION_H
#define IKURLCONNECTION_H

@class NSURLConnection, NSData, NSURLRequest, NSHTTPURLResponse;



@interface IKURLConnection : NSURLConnection {
    id *_context;
}


@property (readonly, nonatomic) NSData *data; // ivar: _data
@property (readonly, nonatomic) NSURLRequest *request; // ivar: _request
@property (readonly, nonatomic) NSHTTPURLResponse *response; // ivar: _response
@property (readonly, nonatomic) int type; // ivar: _type
@property (readonly, nonatomic) id *userInfo; // ivar: _userInfo


-(id)_context;
-(id)initWithRequest:(id)arg0 delegate:(id)arg1 startImmediately:(BOOL)arg2 ;
-(void)_appendData:(id)arg0 ;
-(void)_setContext:(id)arg0 ;
-(void)dealloc;


@end


#endif