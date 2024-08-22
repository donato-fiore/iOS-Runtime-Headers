// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRRENDERINGBACKDROPLAYER_H
#define PRRENDERINGBACKDROPLAYER_H

@class CALayer;



@interface PRRenderingBackdropLayer : CALayer

@property (nonatomic) CGFloat backlightProgress;
@property (nonatomic) CGFloat linearBacklightProgress;


+(BOOL)needsLayoutForKey:(id)arg0 ;


@end


#endif