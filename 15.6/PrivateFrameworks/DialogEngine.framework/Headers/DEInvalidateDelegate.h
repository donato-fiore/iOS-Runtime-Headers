// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DEINVALIDATEDELEGATE_H
#define DEINVALIDATEDELEGATE_H

@class NSString, NSURLSession;
@protocol NSURLSessionDelegate;

#import <Foundation/Foundation.h>


@interface DEInvalidateDelegate : NSObject <NSURLSessionDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *distribution; // ivar: _distribution
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSURLSession *urlSession; // ivar: _urlSession


-(void)URLSession:(id)arg0 didBecomeInvalidWithError:(id)arg1 ;


@end


#endif