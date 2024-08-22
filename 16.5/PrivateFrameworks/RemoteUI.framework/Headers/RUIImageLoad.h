// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RUIIMAGELOAD_H
#define RUIIMAGELOAD_H

@class NSURLSession, NSURLSessionDataTask, NSURL;

#import <Foundation/Foundation.h>


@interface RUIImageLoad : NSObject {
    NSURLSession *_urlSession;
    NSURLSessionDataTask *_dataTask;
}


@property (copy, nonatomic) NSURL *URL; // ivar: _URL


-(BOOL)receivedValidResponse:(id)arg0 ;
-(void)dealloc;
-(void)start;


@end


#endif