// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRKINTERNETDATEPROVIDER_H
#define CRKINTERNETDATEPROVIDER_H

@class NSMutableDictionary, NSString, NSURLSession;
@protocol NSURLSessionDataDelegate, CRKInternetDateFetching;

#import <Foundation/Foundation.h>


@interface CRKInternetDateProvider : NSObject <NSURLSessionDataDelegate, CRKInternetDateFetching>



@property (retain, nonatomic) NSMutableDictionary *completionHandlerTable; // ivar: _completionHandlerTable
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSURLSession *session; // ivar: _session
@property (readonly) Class superclass;


-(id)init;
-(void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)callAndRemoveCompletionHandlerWithDate:(id)arg0 error:(id)arg1 task:(id)arg2 ;
-(void)fetchInternetDateWithCompletion:(id)arg0 ;
-(void)internetDateRequestDidReceiveTask:(id)arg0 ;
// -(void)storeCompletionHandler:(id)arg0 forTask:(unk)arg1  ;


@end


#endif