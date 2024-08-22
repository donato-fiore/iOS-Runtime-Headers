// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LPFETCHERIMAGERESPONSE_H
#define LPFETCHERIMAGERESPONSE_H

@class NSString;
@protocol LPFetcherURLResponse;


#import "LPFetcherResponse.h"
#import "LPImage.h"

@interface LPFetcherImageResponse : LPFetcherResponse <LPFetcherURLResponse>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, retain, nonatomic) LPImage *image; // ivar: _image
@property (readonly) Class superclass;


+(BOOL)isValidMIMEType:(id)arg0 ;
+(id)imagePropertiesForFetcher:(id)arg0 ;
+(id)responseForFetcher:(id)arg0 withData:(id)arg1 MIMEType:(id)arg2 ;
-(id)initWithImage:(id)arg0 fetcher:(id)arg1 ;


@end


#endif