// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHDLINESERIES_H
#define CHDLINESERIES_H

@class NSString;
@protocol CHDMarkerOwner;


#import "CHDSeries.h"
#import "CHDMarker.h"

@interface CHDLineSeries : CHDSeries <CHDMarkerOwner>

 {
    CHDMarker *mMarker;
    BOOL mSmooth;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isSmooth;
-(id)initWithChart:(id)arg0 ;
-(id)marker;
-(void)setMarker:(id)arg0 ;
-(void)setSmooth:(BOOL)arg0 ;


@end


#endif