// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSVARTWORKSERVICECONVERSIONREQUEST_H
#define MSVARTWORKSERVICECONVERSIONREQUEST_H

@class NSURL;


#import "MSVArtworkServiceRequest.h"

@interface MSVArtworkServiceConversionRequest : MSVArtworkServiceRequest

@property (nonatomic) CGFloat destinationCompressionQuality; // ivar: _destinationCompressionQuality
@property (nonatomic) NSInteger destinationFormat; // ivar: _destinationFormat
@property (copy, nonatomic) NSURL *destinationURL; // ivar: _destinationURL
@property (copy, nonatomic) NSURL *sourceURL; // ivar: _sourceURL


+(BOOL)supportsSecureCoding;
-(Class)operationClass;
-(NSInteger)operationPriority;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSourceURL:(id)arg0 destinationURL:(id)arg1 destinationFormat:(NSInteger)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif