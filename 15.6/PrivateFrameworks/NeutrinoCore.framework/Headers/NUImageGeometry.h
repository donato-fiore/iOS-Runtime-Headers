// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NUIMAGEGEOMETRY_H
#define NUIMAGEGEOMETRY_H

@protocol NUTaggedSpaceMapping;

#import <Foundation/Foundation.h>


@interface NUImageGeometry : NSObject <NUTaggedSpaceMapping>



@property (readonly, nonatomic) ? extent; // ivar: _extent
@property (readonly, nonatomic) NSInteger orientation; // ivar: _orientation
@property (readonly, nonatomic) ? renderScale; // ivar: _renderScale
@property (readonly, nonatomic) CGRect scaledExtent;
@property (readonly, nonatomic) ? scaledSize;
@property (readonly, nonatomic) ? size;
@property (readonly, nonatomic) NSObject<NUTaggedSpaceMapping> *spaceMap; // ivar: _spaceMap


-(id)description;
-(id)init;
-(id)initWithExtent:(struct ? )arg0 renderScale:(struct ? )arg1 ;
-(id)initWithExtent:(struct ? )arg0 renderScale:(struct ? )arg1 orientation:(NSInteger)arg2 ;
-(id)initWithExtent:(struct ? )arg0 renderScale:(struct ? )arg1 orientation:(NSInteger)arg2 spaceMap:(id)arg3 ;
-(id)transformWithSourceSpace:(id)arg0 destinationSpace:(id)arg1 error:(*id)arg2 ;


@end


#endif