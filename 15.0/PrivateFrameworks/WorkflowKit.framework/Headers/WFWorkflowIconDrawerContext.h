// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFWORKFLOWICONDRAWERCONTEXT_H
#define WFWORKFLOWICONDRAWERCONTEXT_H

@class NSSet;

#import <Foundation/Foundation.h>


@interface WFWorkflowIconDrawerContext : NSObject

@property (readonly, nonatomic) NSSet *coreGlyphsCatalogs; // ivar: _coreGlyphsCatalogs
@property (readonly, nonatomic) *CGFont glyphFont; // ivar: _glyphFont
@property (readonly, nonatomic) *__CTFont glyphTestFont; // ivar: _glyphTestFont


+(id)cachedContextOrNewContext;
-(struct __CTFont *)newGlyphFontForSize:(CGFloat)arg0 ;
-(void)dealloc;


@end


#endif