// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPARTWORKREPRESENTATIONCOLLECTION_H
#define MPARTWORKREPRESENTATIONCOLLECTION_H


#import <Foundation/Foundation.h>

#import "MPArtworkRepresentation.h"

@interface MPArtworkRepresentationCollection : NSObject

@property (nonatomic) NSUInteger bestRepresentationKinds; // ivar: _bestRepresentationKinds
@property (retain, nonatomic) MPArtworkRepresentation *imageRepresentation; // ivar: _imageRepresentation
@property (retain, nonatomic) MPArtworkRepresentation *videoRepresentation; // ivar: _videoRepresentation


+(id)collectionWithImageRepresentation:(id)arg0 videoRepresentation:(id)arg1 ;
+(id)collectionWithImageRepresentation:(id)arg0 videoRepresentation:(id)arg1 bestRepresentationKinds:(NSUInteger)arg2 ;
-(BOOL)isBestRepresentationForKind:(NSInteger)arg0 ;
-(void)resetForRepresentationKinds:(NSUInteger)arg0 ;


@end


#endif