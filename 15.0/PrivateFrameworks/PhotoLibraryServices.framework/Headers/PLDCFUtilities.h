// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLDCFUTILITIES_H
#define PLDCFUTILITIES_H


#import <Foundation/Foundation.h>


@interface PLDCFUtilities : NSObject



+(BOOL)fileName:(id)arg0 matchesRegex:(id)arg1 ;
+(BOOL)isRenderFileName:(id)arg0 ;
+(BOOL)isSpatialOverCaptureFileName:(id)arg0 ;
+(BOOL)isValidDCFFileName:(id)arg0 ;
+(id)convertHash:(unsigned int)arg0 usingPlaceValues:(id)arg1 ;
+(id)dcfCompliantNameForFileName:(id)arg0 createDate:(id)arg1 fileSize:(NSUInteger)arg2 filenameMarker:(id)arg3 ;
+(id)dcfRegex;
+(id)dcfRegexForAuxiliaryResourceFilenameMarker:(id)arg0 ;
+(id)encodeFileNameFromHash:(unsigned int)arg0 ;
+(id)fileNameByRemovingRenderMarkerInFileName:(id)arg0 ;
+(id)fileNameByRemovingSpatialOverCaptureMarkerInFileName:(id)arg0 ;
+(id)insertAuxiliaryResourceTypeMarker:(id)arg0 intoFileName:(id)arg1 ;
+(id)makeDCFFileNameByHashingFileName:(id)arg0 createDate:(id)arg1 fileSize:(NSUInteger)arg2 ;
+(id)makeDCFFileNameFromFileName:(id)arg0 createDate:(id)arg1 fileSize:(NSUInteger)arg2 ;
+(id)placeValuesFromBases:(id)arg0 ;
+(id)renderDCFRegex;
+(unsigned int)hashForFileName:(id)arg0 createDate:(id)arg1 fileSize:(NSUInteger)arg2 ;
+(void)computeSHA256OfString:(id)arg0 intoBuffer:(char *)arg1 ;


@end


#endif