// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUPDFUTILITIES_H
#define MUPDFUTILITIES_H


#import <Foundation/Foundation.h>


@interface MUPDFUtilities : NSObject



+(NSInteger)exifOrientationOfPage:(struct CGPDFPage *)arg0 ;
+(NSUInteger)indexOfDictionary:(struct CGPDFDictionary *)arg0 inArray:(struct CGPDFArray *)arg1 ;
+(NSUInteger)normalizedRotationAngleOfPage:(struct CGPDFPage *)arg0 ;
+(id)createDictionaryFromPDFDictionary:(struct CGPDFDictionary *)arg0 ;
+(id)createPDFDateString:(id)arg0 ;
+(struct CGAffineTransform )flattenRotationTransformForPage:(struct CGPDFPage *)arg0 outMediaBox:(struct CGRect *)arg1 outCropBox:(struct CGRect *)arg2 ;


@end


#endif