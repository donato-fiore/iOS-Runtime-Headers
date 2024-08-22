// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PTASSETREADERFRAME_H
#define PTASSETREADERFRAME_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface PTAssetReaderFrame : NSObject

@property (nonatomic) *__CVBuffer colorBuffer; // ivar: _colorBuffer
@property (nonatomic) CGAffineTransform colorBufferPreferredTransform; // ivar: _colorBufferPreferredTransform
@property (nonatomic) ? colorBufferTime; // ivar: _colorBufferTime
@property (nonatomic) *__CVBuffer disparityBuffer; // ivar: _disparityBuffer
@property (nonatomic) CGAffineTransform disparityBufferPreferredTransform; // ivar: _disparityBufferPreferredTransform
@property (nonatomic) ? disparityBufferTime; // ivar: _disparityBufferTime
@property (nonatomic) NSUInteger index; // ivar: _index
@property (retain, nonatomic) NSDictionary *jsonFriendlyMetadata; // ivar: _jsonFriendlyMetadata
@property (retain, nonatomic) NSDictionary *metadata; // ivar: _metadata
@property (nonatomic) ? metadataTime; // ivar: _metadataTime
@property (nonatomic) ? time; // ivar: _time


-(id)_jsonFriendlyObject:(id)arg0 ;
-(void)dealloc;


@end


#endif