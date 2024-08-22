// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RCCOMPOSITIONFRAGMENT_H
#define RCCOMPOSITIONFRAGMENT_H

@class NSURL, NSString;
@protocol NSMutableCopying, NSCopying, RCDictionaryPListRepresentationCoding;

#import <Foundation/Foundation.h>


@interface RCCompositionFragment : NSObject <NSMutableCopying, NSCopying, RCDictionaryPListRepresentationCoding>



@property (retain, nonatomic) NSURL *AVOutputURL; // ivar: _AVOutputURL
@property (nonatomic) CGFloat contentDuration; // ivar: _contentDuration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) ? timeRangeInComposition; // ivar: _timeRangeInComposition
@property (nonatomic) ? timeRangeInContentToUse; // ivar: _timeRangeInContentToUse
@property (readonly, nonatomic) NSURL *waveformURL;


-(NSUInteger)fileSizeOfAssetsIncludingRelatedResources:(BOOL)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryPListRepresentation;
-(id)fragmentByIntersectingTimeRangeInCompositionWithTimeRange:(struct ? )arg0 ;
-(id)initWithAVOutputURL:(id)arg0 contentDuration:(CGFloat)arg1 timeRangeInContentToUse:(struct ? )arg2 timeRangeInComposition:(struct ? )arg3 ;
-(id)initWithDictionaryPListRepresentation:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)deleteFromFilesystem;
-(void)moveAssetsToFragment:(id)arg0 ;


@end


#endif