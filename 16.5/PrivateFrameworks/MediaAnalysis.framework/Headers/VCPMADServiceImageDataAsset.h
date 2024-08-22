// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCPMADSERVICEIMAGEDATAASSET_H
#define VCPMADSERVICEIMAGEDATAASSET_H

@class NSData, UTType, NSString, NSArray;


#import "VCPMADServiceImageAsset.h"

@interface VCPMADServiceImageDataAsset : VCPMADServiceImageAsset {
    NSData *_imageData;
    UTType *_uniformTypeIdentifier;
    CF<__CVBuffer *> _pixelBuffer;
    unsigned int _orientation;
    NSString *_identifier;
    NSArray *_documentObservations;
    BOOL _hasCachedParseData;
    NSData *_cachedParseData;
}




-(?)loadPixelBufferorientation;
-(BOOL)hasCachedParseData;
-(BOOL)isHighResDecoded;
-(id)cachedParseData;
-(id)documentObservations;
-(id)identifier;
-(id)initWithImageData:(id)arg0 uniformTypeIdentifier:(id)arg1 identifier:(id)arg2 clientBundleID:(id)arg3 clientTeamID:(id)arg4 ;
-(struct CGSize )resolution;
-(unsigned int)orientation;
-(void)setCachedParseData:(id)arg0 overwriteExisting:(BOOL)arg1 ;
-(void)setDocumentObservations:(id)arg0 ;


@end


#endif