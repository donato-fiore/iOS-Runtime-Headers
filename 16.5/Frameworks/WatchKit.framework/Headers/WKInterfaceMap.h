// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WKINTERFACEMAP_H
#define WKINTERFACEMAP_H



#import "WKInterfaceObject.h"

@interface WKInterfaceMap : WKInterfaceObject



-(void)addAnnotation:(struct CLLocationCoordinate2D )arg0 withImage:(id)arg1 centerOffset:(struct CGPoint )arg2 ;
-(void)addAnnotation:(struct CLLocationCoordinate2D )arg0 withImageNamed:(id)arg1 centerOffset:(struct CGPoint )arg2 ;
-(void)addAnnotation:(struct CLLocationCoordinate2D )arg0 withPinColor:(NSInteger)arg1 ;
-(void)removeAllAnnotations;
-(void)setRegion:(struct ? )arg0 ;
-(void)setVisibleMapRect:(struct ? )arg0 ;


@end


#endif