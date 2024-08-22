// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVCHAPTER_H
#define AVCHAPTER_H

@class UIImage, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface AVChapter : NSObject <NSCopying>

 {
    id *_imageBlock;
}


@property (nonatomic) *CGImage cgImage; // ivar: _cgImage
@property (readonly) CGFloat duration; // ivar: _duration
@property (readonly) UIImage *image;
@property (readonly) NSUInteger number; // ivar: _number
@property (readonly) CGFloat startTime; // ivar: _startTime
@property (readonly, copy) NSString *title; // ivar: _title


+(id)chapterAtTime:(CGFloat)arg0 inChapters:(id)arg1 ;
+(id)playbackChapterWithStartTime:(CGFloat)arg0 duration:(CGFloat)arg1 number:(NSUInteger)arg2 title:(id)arg3 imageFaultBlock:(id)arg4 ;
+(void)initialize;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithStartTime:(CGFloat)arg0 duration:(CGFloat)arg1 number:(NSUInteger)arg2 title:(id)arg3 imageFaultBlock:(id)arg4 ;
-(id)valueForUndefinedKey:(id)arg0 ;
-(void)dealloc;
-(void)setCGImage:(struct CGImage *)arg0 ;
-(void)setValue:(id)arg0 forUndefinedKey:(id)arg1 ;


@end


#endif