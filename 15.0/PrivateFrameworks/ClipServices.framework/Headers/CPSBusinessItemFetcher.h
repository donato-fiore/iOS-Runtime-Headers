// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPSBUSINESSITEMFETCHER_H
#define CPSBUSINESSITEMFETCHER_H

@class BCSBusinessQueryService, NSString;
@protocol CPSBusinessItemFetching;

#import <Foundation/Foundation.h>


@interface CPSBusinessItemFetcher : NSObject <CPSBusinessItemFetching>

 {
    BCSBusinessQueryService *_businessQueryService;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


// -(void)fetchBusinessMetadataForURL:(id)arg0 availabilityHandler:(id)arg1 completion:(unk)arg2  ;
-(void)fetchBusinessMetadataForURL:(id)arg0 completion:(id)arg1 ;
-(void)fetchBusinessMetadataForURLHash:(id)arg0 completion:(id)arg1 ;


@end


#endif