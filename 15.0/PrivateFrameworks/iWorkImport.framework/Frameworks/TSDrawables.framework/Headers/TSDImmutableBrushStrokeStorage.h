// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDIMMUTABLEBRUSHSTROKESTORAGE_H
#define TSDIMMUTABLEBRUSHSTROKESTORAGE_H

@class NSDictionary, NSString, TSUImage;
@protocol TSDBrushStrokeStorage;

#import <Foundation/Foundation.h>


@interface TSDImmutableBrushStrokeStorage : NSObject <TSDBrushStrokeStorage>



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
@property (readonly, nonatomic) NSUInteger totalSectionCount; // ivar: _totalSectionCount


+(NSUInteger)p_totalSectionCountWithPaths:(id)arg0 ;
-(id)deepCopy;
-(id)initWithImage:(id)arg0 paths:(id)arg1 bounds:(id)arg2 textureIndices:(id)arg3 options:(id)arg4 lineEnds:(id)arg5 ;


@end


#endif