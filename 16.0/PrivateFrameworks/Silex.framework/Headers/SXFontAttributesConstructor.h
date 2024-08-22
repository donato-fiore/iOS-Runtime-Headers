// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXFONTATTRIBUTESCONSTRUCTOR_H
#define SXFONTATTRIBUTESCONSTRUCTOR_H

@class NSString;
@protocol SXFontAttributesConstructor, SXFontIndex;

#import <Foundation/Foundation.h>


@interface SXFontAttributesConstructor : NSObject <SXFontAttributesConstructor>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<SXFontIndex> *fontIndex; // ivar: _fontIndex
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)weightByApplyingWeightLabels:(id)arg0 toWeight:(NSInteger)arg1 ;
-(id)fontAttributesForFontDescriptions:(id)arg0 ;
-(id)fontFaceForAttributes:(id)arg0 size:(NSInteger)arg1 ;
-(id)fontNameForAttributes:(id)arg0 size:(NSInteger)arg1 ;
-(id)initWithFontIndex:(id)arg0 ;


@end


#endif