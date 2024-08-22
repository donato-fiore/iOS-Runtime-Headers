// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSVARTWORKSERVICERESIZEREQUEST_H
#define MSVARTWORKSERVICERESIZEREQUEST_H

@class NSMutableArray, NSURL;


#import "MSVArtworkServiceRequest.h"

@interface MSVArtworkServiceResizeRequest : MSVArtworkServiceRequest

@property (retain, nonatomic) NSMutableArray *resizeDestinations; // ivar: _resizeDestinations
@property (copy, nonatomic) NSURL *sourceURL; // ivar: _sourceURL


+(BOOL)supportsSecureCoding;
-(Class)operationClass;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSourceURL:(id)arg0 ;
-(void)addDestinationWithFormat:(NSInteger)arg0 size:(struct CGSize )arg1 url:(id)arg2 ;
-(void)addJPEGDestinationWithSize:(struct CGSize )arg0 compressionQuality:(CGFloat)arg1 url:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateDestinationsUsingBlock:(id)arg0 ;


@end


#endif