// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSWPURLDATADETECTOR_H
#define TSWPURLDATADETECTOR_H

@class NSString, NSDataDetector;
@protocol TSWPDataDetectorProtocol;

#import <Foundation/Foundation.h>


@interface TSWPURLDataDetector : NSObject <TSWPDataDetectorProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSDataDetector *detector; // ivar: _detector
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)detectedDataInString:(id)arg0 scanRange:(struct _NSRange )arg1 withTextCheckingTypes:(NSUInteger)arg2 ;
+(id)_newDetector;
+(id)newArrayByScanningString:(id)arg0 scanRange:(struct _NSRange )arg1 ;
+(id)newURLFromString:(id)arg0 ;
+(id)p_newArrayByScanningString:(id)arg0 scanRange:(struct _NSRange )arg1 returnAllResults:(BOOL)arg2 dataDetector:(id)arg3 ;
+(id)p_rangesSplitByNewLineOfString:(id)arg0 scanRange:(struct _NSRange )arg1 ;
+(id)scanString:(id)arg0 scanRange:(struct _NSRange )arg1 ;
+(struct _NSRange )calculateScanRangeForString:(id)arg0 changedRange:(struct _NSRange )arg1 ;
+(struct _NSRange )expandValidRange:(struct _NSRange )arg0 inString:(id)arg1 ;
+(void)setInvalidURLSchemes:(id)arg0 ;
-(id)init;
-(id)initWithTextCheckingType:(NSUInteger)arg0 ;
-(id)scanString:(id)arg0 ;


@end


#endif