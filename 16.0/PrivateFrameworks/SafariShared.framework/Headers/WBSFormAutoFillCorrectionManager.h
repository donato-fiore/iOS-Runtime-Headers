// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSFORMAUTOFILLCORRECTIONMANAGER_H
#define WBSFORMAUTOFILLCORRECTIONMANAGER_H

@protocol WBSFormAutoFillCorrectionsStore, WBSFormAutoFillCorrectionManagerDelegate;

#import <Foundation/Foundation.h>

#import "WBSFormAutoFillClassificationToCorrectionsTransformer.h"

@interface WBSFormAutoFillCorrectionManager : NSObject {
    id<WBSFormAutoFillCorrectionsStore> *_correctionsStore;
    WBSFormAutoFillClassificationToCorrectionsTransformer *_classificationToCorrectionsTransformer;
}


@property (weak, nonatomic) NSObject<WBSFormAutoFillCorrectionManagerDelegate> *delegate; // ivar: _delegate


-(id)_feedbackProcessor;
-(id)initWithCorrectionsStore:(id)arg0 ;
-(void)_setCorrections:(id)arg0 forFingerprint:(id)arg1 onDomain:(id)arg2 ;
-(void)getCorrectionsForFormFieldFingerprint:(id)arg0 onDomain:(id)arg1 completionHandler:(id)arg2 ;
-(void)setCorrectionSet:(id)arg0 ;


@end


#endif