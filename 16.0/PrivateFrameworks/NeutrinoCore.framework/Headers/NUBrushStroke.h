// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUBRUSHSTROKE_H
#define NUBRUSHSTROKE_H

@class NSMutableData;
@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface NUBrushStroke : NSObject <NSCopying, NSMutableCopying>

 {
    ? _extent;
    ? _clipRect;
    NSMutableData *_data;
}


@property (readonly, nonatomic) float opacity; // ivar: _opacity
@property (readonly, nonatomic) NSInteger pressureMode; // ivar: _pressureMode
@property (readonly, nonatomic) float radius; // ivar: _radius
@property (readonly, nonatomic) float softness; // ivar: _softness


+(id)brushStrokeFromDictionary:(id)arg0 ;
+(id)dictionaryFromBrushStroke:(id)arg0 ;
-(NSInteger)pointCount;
-(id)_createDataFromPointArray:(id)arg0 ;
-(id)_createPointArrayFromData:(id)arg0 ;
-(id)ciImageTiled:(BOOL)arg0 closed:(BOOL)arg1 pressureMode:(NSInteger)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithDictionary:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)points;
-(struct ? )clipRect;
-(struct ? )extent;
-(struct ? )pointAtIndex:(NSInteger)arg0 ;
-(void)_initializeWithRadius:(float)arg0 softness:(float)arg1 opacity:(float)arg2 extent:(struct ? )arg3 clipRect:(struct ? )arg4 data:(id)arg5 pressureMode:(NSInteger)arg6 ;
-(void)_updateExtent;
-(void)writeToTIFFAtPath:(id)arg0 closed:(BOOL)arg1 pressureMode:(NSInteger)arg2 ;


@end


#endif