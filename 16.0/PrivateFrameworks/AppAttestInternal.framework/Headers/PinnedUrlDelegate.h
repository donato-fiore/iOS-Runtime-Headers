// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PINNEDURLDELEGATE_H
#define PINNEDURLDELEGATE_H

@class NSString;
@protocol NSURLSessionDelegate;

#import <Foundation/Foundation.h>


@interface PinnedUrlDelegate : NSObject <NSURLSessionDelegate>

 {
    NSString *m_host;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithHost:(id)arg0 ;
-(void)URLSession:(id)arg0 didReceiveChallenge:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif