// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef __NSFONTEXTRADATA_H
#define __NSFONTEXTRADATA_H

@class NSString;

#import <Foundation/Foundation.h>


@interface __NSFontExtraData : NSObject {
    CGFloat _ascender;
    CGFloat _lineHeight;
    ? _fFlags;
    NSString *_textStyleForScaling;
    CGFloat _pointSizeForScaling;
    CGFloat _maximumPointSizeAfterScaling;
}




-(BOOL)isEqualToExtraData:(id)arg0 ;
-(NSUInteger)hash;
-(void)dealloc;


@end


#endif