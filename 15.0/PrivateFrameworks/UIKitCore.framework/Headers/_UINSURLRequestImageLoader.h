// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UINSURLREQUESTIMAGELOADER_H
#define _UINSURLREQUESTIMAGELOADER_H

@class UIImageLoader, NSURLRequest, NSURLSession, NSURLSessionTask;



@interface _UINSURLRequestImageLoader : UIImageLoader {
    NSURLRequest *_request;
    NSURLSession *_session;
    NSURLSessionTask *_task;
}




-(BOOL)_really_cancel;
-(id)_error;
-(id)initWithURLRequest:(id)arg0 session:(id)arg1 ;
-(void)_really_loadImage:(id)arg0 ;


@end


#endif