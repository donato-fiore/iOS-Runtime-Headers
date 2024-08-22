// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCPMADSERVICEIMAGEURLASSET_H
#define VCPMADSERVICEIMAGEURLASSET_H

@class NSURL, NSString, NSArray, NSData;


#import "VCPMADServiceImageAsset.h"

@interface VCPMADServiceImageURLAsset : VCPMADServiceImageAsset {
    NSURL *_url;
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
-(id)initWithURL:(id)arg0 identifier:(id)arg1 clientBundleID:(id)arg2 clientTeamID:(id)arg3 ;
-(struct CGSize )resolution;
-(unsigned int)orientation;
-(void)setCachedParseData:(id)arg0 overwriteExisting:(BOOL)arg1 ;
-(void)setDocumentObservations:(id)arg0 ;


@end


#endif