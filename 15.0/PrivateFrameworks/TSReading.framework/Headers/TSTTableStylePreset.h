// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSTTABLESTYLEPRESET_H
#define TSTTABLESTYLEPRESET_H

@class NSString;
@protocol TSSPreset, TSSStyleClient, TSKModel;


#import "TSPObject.h"
#import "TSTTableStyleNetwork.h"

@interface TSTTableStylePreset : TSPObject <TSSPreset, TSSStyleClient, TSKModel>

 {
    NSUInteger mIndex;
    TSTTableStyleNetwork *mStyleNetwork;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger index;
@property (readonly, nonatomic) NSString *presetKind;
@property (copy, nonatomic) TSTTableStyleNetwork *styleNetwork;
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isThemeEquivalent:(id)arg0 ;
-(id)initWithContext:(id)arg0 ;
-(id)initWithStyleNetwork:(id)arg0 index:(NSUInteger)arg1 ;
-(id)p_documentRoot;
-(id)referencedStyles;
-(id)styleNetworkInStylesheet:(id)arg0 ;
-(id)swatchImage;
-(void)dealloc;
-(void)drawSwatchInRect:(struct CGRect )arg0 inContext:(struct CGContext *)arg1 ;
-(void)replaceReferencedStylesUsingBlock:(id)arg0 ;


@end


#endif