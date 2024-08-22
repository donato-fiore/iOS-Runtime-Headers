// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NWMULTRAVIOLETINDEXCOLORINDEX_H
#define NWMULTRAVIOLETINDEXCOLORINDEX_H

@class NWKUIColorIndex, NSString;
@protocol NWKUIColorIndexable;



@interface NWMUltravioletIndexColorIndex : NWKUIColorIndex <NWKUIColorIndexable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(CGFloat)lastValue;
+(id)allIndices;
+(id)indexWithUltravioletIndexValue:(CGFloat)arg0 color:(id)arg1 ;
-(id)initWithUltravioletIndexValue:(CGFloat)arg0 color:(id)arg1 ;


@end


#endif