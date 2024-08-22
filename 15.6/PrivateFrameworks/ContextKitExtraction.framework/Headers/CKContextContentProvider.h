// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKCONTEXTCONTENTPROVIDER_H
#define CKCONTEXTCONTENTPROVIDER_H


#import <Foundation/Foundation.h>


@interface CKContextContentProvider : NSObject



+(id)handlePDFView:(id)arg0 withExecutor:(id)arg1 ;
+(unsigned char)controlCodeForExecutor:(id)arg0 ;
+(void)extractContentFromWebViewPDFData:(id)arg0 withCompletionHandler:(id)arg1 ;
-(CGFloat)timeout;
-(void)extractUsingExecutor:(id)arg0 ;
-(void)extractUsingExecutor:(id)arg0 withOptions:(NSUInteger)arg1 ;


@end


#endif