// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXIMAGETITLESUBTITLESPEC_H
#define PXIMAGETITLESUBTITLESPEC_H



#import "PXViewSpec.h"
#import "PXImageViewSpec.h"
#import "PXTitleSubtitleLabelSpec.h"

@interface PXImageTitleSubtitleSpec : PXViewSpec

@property (retain, nonatomic) PXImageViewSpec *imageSpec; // ivar: _imageSpec
@property (retain, nonatomic) PXTitleSubtitleLabelSpec *titleSubtitleSpec; // ivar: _titleSubtitleSpec


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif