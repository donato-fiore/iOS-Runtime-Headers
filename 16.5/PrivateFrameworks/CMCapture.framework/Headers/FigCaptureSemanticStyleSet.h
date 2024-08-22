// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FIGCAPTURESEMANTICSTYLESET_H
#define FIGCAPTURESEMANTICSTYLESET_H

@class NSArray, NSString;
@protocol FigXPCCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface FigCaptureSemanticStyleSet : NSObject <FigXPCCoding, NSCopying>

 {
    NSArray *_semanticStyles;
    NSArray *_regions;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *regions;
@property (readonly, nonatomic) NSArray *semanticStyles;
@property (readonly) Class superclass;


+(id)semanticStyleSetWithSemanticStyles:(id)arg0 regions:(id)arg1 ;
-(float)largestEdgeOffset;
-(float)leftmostRegionStartXOffset;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg0 ;
-(id)largestRegionSemanticStyle;
-(struct CGRect )regionAtIndex:(NSUInteger)arg0 ;
-(void)dealloc;


@end


#endif