// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LPFETCHERARASSETRESPONSE_H
#define LPFETCHERARASSETRESPONSE_H

@class NSString;
@protocol LPFetcherURLResponse;


#import "LPFetcherResponse.h"
#import "LPARAsset.h"

@interface LPFetcherARAssetResponse : LPFetcherResponse <LPFetcherURLResponse>



@property (readonly, retain, nonatomic) LPARAsset *arAsset; // ivar: _arAsset
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)isValidMIMEType:(id)arg0 ;
+(id)arAssetPropertiesForFetcher:(id)arg0 ;
+(id)responseForFetcher:(id)arg0 withData:(id)arg1 MIMEType:(id)arg2 ;
-(id)initWithARAsset:(id)arg0 fetcher:(id)arg1 ;


@end


#endif