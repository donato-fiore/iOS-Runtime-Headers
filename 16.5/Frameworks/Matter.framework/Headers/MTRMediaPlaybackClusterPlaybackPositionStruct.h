// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRMEDIAPLAYBACKCLUSTERPLAYBACKPOSITIONSTRUCT_H
#define MTRMEDIAPLAYBACKCLUSTERPLAYBACKPOSITIONSTRUCT_H

@class NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTRMediaPlaybackClusterPlaybackPositionStruct : NSObject <NSCopying>



@property (copy, nonatomic) NSNumber *position; // ivar: _position
@property (copy, nonatomic) NSNumber *updatedAt; // ivar: _updatedAt


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif