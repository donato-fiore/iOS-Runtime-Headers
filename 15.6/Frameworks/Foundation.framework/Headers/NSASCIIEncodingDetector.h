// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSASCIIENCODINGDETECTOR_H
#define NSASCIIENCODINGDETECTOR_H



#import "NSSingleByteEncodingDetector.h"

@interface NSASCIIEncodingDetector : NSSingleByteEncodingDetector



-(CGFloat)confidence;
-(NSUInteger)recognizeString:(char *)arg0 withDataLength:(NSUInteger)arg1 intoBuffer:(id)arg2 ;


@end


#endif