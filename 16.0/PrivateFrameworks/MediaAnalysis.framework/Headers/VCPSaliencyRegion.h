// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCPSALIENCYREGION_H
#define VCPSALIENCYREGION_H


#import <Foundation/Foundation.h>


@interface VCPSaliencyRegion : NSObject

@property CGRect bound; // ivar: _bound
@property float confidence; // ivar: _confidence


+(id)salientRegionsFromPixelBuffer:(struct __CVBuffer *)arg0 ;
+(void)attachSalientRegions:(id)arg0 toPixelBuffer:(struct __CVBuffer *)arg1 ;
-(id)initWith:(struct CGRect )arg0 confidence:(float)arg1 ;
-(id)initWithPlistRepresentation:(id)arg0 ;
-(id)plistRepresentation;


@end


#endif