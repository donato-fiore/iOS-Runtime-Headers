// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKGEOJSONDECODER_H
#define MKGEOJSONDECODER_H


#import <Foundation/Foundation.h>


@interface MKGeoJSONDecoder : NSObject



+(id)_decodeGeometry:(id)arg0 error:(*id)arg1 ;
+(id)_decodeGeometryCollection:(id)arg0 error:(*id)arg1 ;
-(id)_decodeFeatureCollection:(id)arg0 error:(*id)arg1 ;
-(id)geoJSONObjectsWithData:(id)arg0 error:(*id)arg1 ;
-(id)init;


@end


#endif