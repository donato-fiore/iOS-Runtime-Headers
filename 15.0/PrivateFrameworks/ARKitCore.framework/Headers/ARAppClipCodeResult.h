// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARAPPCLIPCODERESULT_H
#define ARAPPCLIPCODERESULT_H

@class NSURL;

#import <Foundation/Foundation.h>


@interface ARAppClipCodeResult : NSObject

@property (nonatomic) ? codeToWorldVisionTransform; // ivar: _codeToWorldVisionTransform
@property (nonatomic) float confidence; // ivar: _confidence
@property (nonatomic) BOOL isScaleReliable; // ivar: _isScaleReliable
@property (nonatomic) CGSize size; // ivar: _size
@property (retain, nonatomic) NSURL *url; // ivar: _url
@property (nonatomic) NSInteger urlDecodingStateInternal; // ivar: _urlDecodingStateInternal
@property (nonatomic) NSUInteger urlEncodingVersion; // ivar: _urlEncodingVersion




@end


#endif