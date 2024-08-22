// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSURLSESSIONDELEGATE_H
#define NSURLSESSIONDELEGATE_H

@class NSString;
@protocol NSURLSessionDelegate;

#import <Foundation/Foundation.h>


@interface NSURLSessionDelegate : NSObject <NSURLSessionDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property BOOL enableExtendedValidation; // ivar: _enableExtendedValidation
@property (readonly) NSUInteger hash;
@property BOOL ignoreInvalidCerts; // ivar: _ignoreInvalidCerts
@property (retain) NSString *leafOID; // ivar: _leafOID
@property BOOL revocationFailClosed; // ivar: _revocationFailClosed
@property (readonly) Class superclass;
@property (retain) NSString *validationHostname; // ivar: _validationHostname


-(void)URLSession:(id)arg0 didReceiveChallenge:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif