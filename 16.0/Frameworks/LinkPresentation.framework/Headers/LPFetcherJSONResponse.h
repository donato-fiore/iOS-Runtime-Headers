// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LPFETCHERJSONRESPONSE_H
#define LPFETCHERJSONRESPONSE_H

@class NSString;
@protocol LPFetcherURLResponse;


#import "LPFetcherResponse.h"

@interface LPFetcherJSONResponse : LPFetcherResponse <LPFetcherURLResponse>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, retain, nonatomic) id *rootObject; // ivar: _rootObject
@property (readonly) Class superclass;


+(BOOL)isValidMIMEType:(id)arg0 ;
+(id)responseForFetcher:(id)arg0 withData:(id)arg1 MIMEType:(id)arg2 ;
-(id)initWithRootObject:(id)arg0 fetcher:(id)arg1 ;


@end


#endif