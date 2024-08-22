// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QLFILETHUMBNAILREQUEST_H
#define QLFILETHUMBNAILREQUEST_H

@class NSString, NSURL, NSDictionary;

#import <Foundation/Foundation.h>


@interface QLFileThumbnailRequest : NSObject

@property (nonatomic) NSUInteger badgeType; // ivar: _badgeType
@property (copy, nonatomic) NSString *contentType; // ivar: _contentType
@property (copy, nonatomic) NSURL *fileURL; // ivar: _fileURL
@property (retain, nonatomic) NSDictionary *generationData; // ivar: _generationData
@property int iconFlavor; // ivar: _iconFlavor
@property (nonatomic) int interpolationQuality; // ivar: _interpolationQuality
@property (nonatomic) CGSize maximumSize; // ivar: _maximumSize
@property (nonatomic) CGSize minimumSize; // ivar: _minimumSize
@property (nonatomic) CGFloat scale; // ivar: _scale


-(id)initWithMaximumSize:(struct CGSize )arg0 minimumSize:(CGFloat)arg1 scale:(CGFloat)arg2 badgeType:(NSUInteger)arg3 iconFlavor:(int)arg4 contentType:(id)arg5 fileURL:(id)arg6 generationData:(id)arg7 interpolationQuality:(int)arg8 ;


@end


#endif