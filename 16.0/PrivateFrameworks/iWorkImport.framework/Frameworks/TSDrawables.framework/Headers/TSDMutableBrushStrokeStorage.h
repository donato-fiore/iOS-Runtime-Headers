// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSDMUTABLEBRUSHSTROKESTORAGE_H
#define TSDMUTABLEBRUSHSTROKESTORAGE_H

@class NSDictionary, NSString, TSUImage;
@protocol TSDBrushStrokeStorage;

#import <Foundation/Foundation.h>


@interface TSDMutableBrushStrokeStorage : NSObject <TSDBrushStrokeStorage>



@property (readonly, copy, nonatomic) NSDictionary *bounds; // ivar: _bounds
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) TSUImage *image; // ivar: _image
@property (readonly, copy, nonatomic) NSDictionary *lineEnds; // ivar: _lineEnds
@property (readonly, copy, nonatomic) NSDictionary *options; // ivar: _options
@property (readonly, copy, nonatomic) NSDictionary *paths; // ivar: _paths
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSDictionary *textureIndices; // ivar: _textureIndices
@property (readonly, nonatomic) NSUInteger totalSectionCount;


+(id)p_smoothPath:(id)arg0 ;
-(id)deepCopy;
-(id)init;
-(void)addPath:(id)arg0 withBounds:(struct CGRect )arg1 shouldSmooth:(BOOL)arg2 forKey:(id)arg3 ;
-(void)addTextureIndex:(NSUInteger)arg0 forKey:(id)arg1 ;
-(void)setLineEnd:(id)arg0 forKey:(id)arg1 ;
-(void)setOption:(id)arg0 forKey:(id)arg1 ;


@end


#endif