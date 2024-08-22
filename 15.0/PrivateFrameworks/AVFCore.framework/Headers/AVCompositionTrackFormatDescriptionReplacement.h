// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVCOMPOSITIONTRACKFORMATDESCRIPTIONREPLACEMENT_H
#define AVCOMPOSITIONTRACKFORMATDESCRIPTIONREPLACEMENT_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AVCompositionTrackFormatDescriptionReplacement : NSObject <NSSecureCoding>

 {
    *opaqueCMFormatDescription _originalFormatDescription;
    *opaqueCMFormatDescription _replacementFormatDescription;
}


@property (readonly) *opaqueCMFormatDescription originalFormatDescription;
@property (readonly) *opaqueCMFormatDescription replacementFormatDescription;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOriginalFormatDescription:(struct opaqueCMFormatDescription *)arg0 andReplacementFormatDescription:(struct opaqueCMFormatDescription *)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif