// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TVPSECUREKEYSTANDARDCONNECTOR_H
#define TVPSECUREKEYSTANDARDCONNECTOR_H

@class NSString, NSOperationQueue;
@protocol TVPSecureKeyStandardLoaderRequestGenerating, TVPSecureKeyStandardLoaderConnectionHandling;

#import <Foundation/Foundation.h>


@interface TVPSecureKeyStandardConnector : NSObject <TVPSecureKeyStandardLoaderRequestGenerating, TVPSecureKeyStandardLoaderConnectionHandling>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSOperationQueue *operationQueue; // ivar: _operationQueue
@property (readonly) Class superclass;


-(id)init;
-(id)secureKeyStandardLoader:(id)arg0 requestForFetchingDataFromURL:(id)arg1 ;
-(id)secureKeyStandardLoader:(id)arg0 requestForPostingData:(id)arg1 toURL:(id)arg2 ;
-(void)secureKeyStandardLoader:(id)arg0 sendAsynchronousRequest:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif