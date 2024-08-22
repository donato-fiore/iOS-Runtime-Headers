// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCPMADSERVICEIMAGEPIXELBUFFERASSET_H
#define VCPMADSERVICEIMAGEPIXELBUFFERASSET_H

@class NSString, NSArray, NSData;


#import "VCPMADServiceImageAsset.h"

@interface VCPMADServiceImagePixelBufferAsset : VCPMADServiceImageAsset {
    CF<__CVBuffer *> _pixelBuffer;
    unsigned int _orientation;
    NSString *_identifier;
    NSArray *_documentObservations;
    BOOL _hasCachedParseData;
    NSData *_cachedParseData;
}




-(?)loadPixelBufferorientation;
-(BOOL)hasCachedParseData;
-(id)cachedParseData;
-(id)documentObservations;
-(id)identifier;
-(id)initWithPixelBuffer:(struct __CVBuffer *)arg0 orientation:(unsigned int)arg1 andIdentifier:(id)arg2 clientBundleID:(id)arg3 clientTeamID:(id)arg4 ;
-(void)setCachedParseData:(id)arg0 ;
-(void)setDocumentObservations:(id)arg0 ;


@end


#endif