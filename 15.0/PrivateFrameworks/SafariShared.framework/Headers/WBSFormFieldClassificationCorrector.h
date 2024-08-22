// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSFORMFIELDCLASSIFICATIONCORRECTOR_H
#define WBSFORMFIELDCLASSIFICATIONCORRECTOR_H

@class NSSet, NSString, NSDictionary;
@protocol WBSFormFieldClassificationCorrectorDelegate;

#import <Foundation/Foundation.h>

#import "WBSFormAutoFillClassificationToCorrectionsTransformer.h"
#import "WBSFormMetadata.h"

@interface WBSFormFieldClassificationCorrector : NSObject {
    WBSFormAutoFillClassificationToCorrectionsTransformer *_classificationToCorrectionsTransformer;
    NSSet *_uniqueIDsOfControlsThatWereAutoFilled;
}


@property (weak, nonatomic) NSObject<WBSFormFieldClassificationCorrectorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy, nonatomic) NSString *domain; // ivar: _domain
@property (readonly, copy, nonatomic) WBSFormMetadata *formMetadata; // ivar: _formMetadata
@property (readonly, copy, nonatomic) NSDictionary *formValues; // ivar: _formValues


-(id)_classificationCorrectionsForControlWithMetadata:(id)arg0 wasIdentifiedAsAddressBookField:(*BOOL)arg1 ;
-(id)init;
-(id)initWithDomain:(id)arg0 formMetadata:(id)arg1 formValues:(id)arg2 uniqueIDsOfControlsThatWereAutoFilled:(id)arg3 ;
-(void)processCorrections;


@end


#endif