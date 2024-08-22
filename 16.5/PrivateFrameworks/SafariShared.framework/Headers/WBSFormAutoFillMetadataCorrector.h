// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSFORMAUTOFILLMETADATACORRECTOR_H
#define WBSFORMAUTOFILLMETADATACORRECTOR_H

@class NSCache, NSMutableSet, NSString;
@protocol WBSFormAutoFillCorrectionsStore;

#import <Foundation/Foundation.h>

#import "WBSFormAutoFillClassificationToCorrectionsTransformer.h"

@interface WBSFormAutoFillMetadataCorrector : NSObject {
    id<WBSFormAutoFillCorrectionsStore> *_correctionsStore;
    NSCache *_fingerprintsToCorrections;
    WBSFormAutoFillClassificationToCorrectionsTransformer *_classificationToCorrectionsTransformer;
    NSMutableSet *_correctedFormMetadataID;
}


@property (readonly, nonatomic) NSString *domain; // ivar: _domain


-(BOOL)hasAttemptedToCorrectMetadata:(id)arg0 ;
-(id)bestAvailableMetadataFromControlMetadata:(id)arg0 ;
-(id)bestAvailableMetadataFromMetadata:(id)arg0 ;
-(id)init;
-(id)initWithDomain:(id)arg0 ;
-(void)_commonInitWithDomain:(id)arg0 correctionsStore:(id)arg1 ;
-(void)enqueueCorrectionsRequestForFormMetadata:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif