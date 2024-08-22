// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _GEOTRANSITLINEMARKER_H
#define _GEOTRANSITLINEMARKER_H

@class NSString;
@protocol MKTransitLineMarker, GEOTransitLine;

#import <Foundation/Foundation.h>


@interface _GEOTransitLineMarker : NSObject <MKTransitLineMarker>

 {
    id<GEOTransitLine> *_line;
    CLLocationCoordinate2D _locationHint;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)artwork;
-(id)initWithGEOTransitLine:(id)arg0 locationHint:(struct CLLocationCoordinate2D )arg1 ;
-(id)labelText;
-(id)mapItemIdentifier;


@end


#endif