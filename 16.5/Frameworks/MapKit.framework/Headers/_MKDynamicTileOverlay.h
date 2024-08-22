// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MKDYNAMICTILEOVERLAY_H
#define _MKDYNAMICTILEOVERLAY_H

@class NSString;
@protocol _MKOverlayTileDataSource, MKOverlay;

#import <Foundation/Foundation.h>


@interface _MKDynamicTileOverlay : NSObject <_MKOverlayTileDataSource, MKOverlay>



@property (readonly, nonatomic) ? boundingMapRect;
@property (readonly, nonatomic) CLLocationCoordinate2D coordinate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, getter=isGeometryFlipped) BOOL geometryFlipped;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger maximumZ; // ivar: _maximumZ
@property (nonatomic) NSInteger minimumZ; // ivar: _minimumZ
@property (readonly, nonatomic, getter=_providerID) unsigned int providerID; // ivar: _providerID
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *title;


-(id)init;
-(void)_cancelLoadingTileAtPath:(struct ? )arg0 ;
-(void)cancelLoadingTileAtPath:(struct ? )arg0 ;
-(void)dealloc;
-(void)loadTileAtPath:(struct ? )arg0 result:(id)arg1 ;


@end


#endif