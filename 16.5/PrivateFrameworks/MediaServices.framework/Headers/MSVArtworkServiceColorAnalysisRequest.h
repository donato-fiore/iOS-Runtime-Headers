// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSVARTWORKSERVICECOLORANALYSISREQUEST_H
#define MSVARTWORKSERVICECOLORANALYSISREQUEST_H

@class NSURL;


#import "MSVArtworkServiceRequest.h"

@interface MSVArtworkServiceColorAnalysisRequest : MSVArtworkServiceRequest

@property (readonly, nonatomic) float preferredImageHeight; // ivar: _preferredImageHeight
@property (readonly, nonatomic) float preferredImageWidth; // ivar: _preferredImageWidth
@property (readonly, nonatomic) NSURL *sourceURL; // ivar: _sourceURL


+(BOOL)supportsSecureCoding;
-(Class)operationClass;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSourceURL:(id)arg0 preferredImageSize:(struct CGSize )arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif