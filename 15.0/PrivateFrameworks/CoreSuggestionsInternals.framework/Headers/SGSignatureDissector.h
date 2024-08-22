// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGSIGNATUREDISSECTOR_H
#define SGSIGNATUREDISSECTOR_H

@class NSNumber, NSString;
@protocol SGMailMessageProcessing;


#import "SGPipelineDissector.h"

@interface SGSignatureDissector : SGPipelineDissector <SGMailMessageProcessing>

 {
    NSNumber *_ignoreDataDetectorsForTesting;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)singleLineSignatureLeadingCharacterSet;
-(BOOL)_paragraphWithContent:(id)arg0 range:(struct _NSRange )arg1 exceedsLineLimit:(NSUInteger)arg2 orCharacterLimit:(NSUInteger)arg3 ;
-(BOOL)shouldIgnoreSignature:(id)arg0 signatureRange:(struct _NSRange *)arg1 isInhuman:(*BOOL)arg2 ;
-(id)authorFirstname:(id)arg0 ;
-(id)authorName:(id)arg0 ;
-(id)findRejectSig:(id)arg0 ;
-(id)findSignaturePrefixesInMessage:(id)arg0 withSignaturePrefixes:(id)arg1 ;
-(id)findValedictionCommencedSignatureRanges:(id)arg0 ;
-(id)initIgnoringDataDetectors;
-(struct _NSRange )findSignaturePrefix:(id)arg0 ;
-(struct _NSRange )findValediction:(id)arg0 ;
-(struct _NSRange )hmmPlausibleSignatureRange:(id)arg0 ;
-(struct _NSRange )hmmSignatureRange:(id)arg0 ;
-(struct _NSRange )hmmSignatureRangeWithContent:(id)arg0 detectedData:(id)arg1 quotedRegions:(id)arg2 authorName:(id)arg3 ;
-(struct _NSRange )miniSignatureRange:(id)arg0 ;
-(struct _NSRange )rangeOfSenderName:(id)arg0 inRange:(struct _NSRange )arg1 restrictLength:(BOOL)arg2 forMessage:(id)arg3 ;
-(struct _NSRange )rangeOfSenderNameComponents:(id)arg0 withFullname:(id)arg1 inSubstring:(id)arg2 ;
-(struct _NSRange )signatureRange:(id)arg0 ;
-(struct _NSRange )trailingSenderNameLineRange:(id)arg0 ;
-(void)dissectMailMessage:(id)arg0 entity:(id)arg1 context:(id)arg2 ;


@end


#endif