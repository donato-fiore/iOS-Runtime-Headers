// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SPRREADER_H
#define SPRREADER_H

@class NSData;
@protocol SPRSubject;

#import <Foundation/Foundation.h>


@interface SPRReader : NSObject <SPRSubject>

 {
    ? footprint;
    ? provider;
    ? attestation;
    ? operationQueue;
    ? persisting;
    ? signer;
    ? timeKeeper;
    ? caLogger;
    ? burnoutTimer;
}


@property (nonatomic, readonly) NSData *footprint;


-(BOOL)cancelReadAndReturnError:(*id)arg0 ;
-(BOOL)cancelReadWithCallback:(id)arg0 error:(*id)arg1 ;
-(id)getCardReaderBlobWithTxnBlob:(id)arg0 ;
-(id)init;
-(void)cancelReadWithCallback:(id)arg0 ;
-(void)dealloc;
-(void)readCardWithParameter:(id)arg0 callback:(id)arg1 ;


@end


#endif