// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CNDATAURLSESSIONTASKADAPTER_H
#define _CNDATAURLSESSIONTASKADAPTER_H

@class NSString;
@protocol NSURLSessionDataDelegate;

#import <Foundation/Foundation.h>


@interface _CNDataURLSessionTaskAdapter : NSObject <NSURLSessionDataDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy) id *onCompletion; // ivar: _onCompletion
@property (copy) id *onDataReceived; // ivar: _onDataReceived
@property (readonly) Class superclass;


-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveData:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2 ;


@end


#endif