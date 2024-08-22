// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKGETSECUREDSTATUSROUTER_H
#define MKGETSECUREDSTATUSROUTER_H

@class NSString, NSDictionary, NSArray;
@protocol MKHTTPRouter;

#import <Foundation/Foundation.h>

#import "MKStorage.h"

@interface MKGETSecuredStatusRouter : NSObject <MKHTTPRouter>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDictionary *signatures; // ivar: _signatures
@property (retain, nonatomic) MKStorage *storage; // ivar: _storage
@property (readonly) Class superclass;
@property (retain, nonatomic) NSArray *supportedContentTypes; // ivar: _supportedContentTypes
@property (retain, nonatomic) NSArray *supportedTransferEncodings; // ivar: _supportedTransferEncodings
@property (copy, nonatomic) NSString *uuid; // ivar: _uuid


-(id)init;
-(void)server:(id)arg0 didReceiveRequest:(id)arg1 response:(id)arg2 ;


@end


#endif