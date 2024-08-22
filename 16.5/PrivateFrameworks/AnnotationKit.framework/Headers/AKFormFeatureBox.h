// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AKFORMFEATUREBOX_H
#define AKFORMFEATUREBOX_H



#import "AKFormFeature.h"
#import "AKFormFeatureLine.h"

@interface AKFormFeatureBox : AKFormFeature

@property (nonatomic) NSUInteger alignment; // ivar: _alignment
@property (retain, nonatomic) AKFormFeatureLine *baseline; // ivar: _baseline
@property (nonatomic) CGRect enclosingRegionRect; // ivar: _enclosingRegionRect
@property (nonatomic) NSUInteger flags; // ivar: _flags
@property (nonatomic, getter=isMultiline) BOOL multiline; // ivar: _multiline
@property (nonatomic) BOOL widthExpands; // ivar: _widthExpands


+(id)boxWithRect:(struct CGRect )arg0 onPage:(id)arg1 flags:(NSUInteger)arg2 baseline:(id)arg3 ;
-(id)initWithRect:(struct CGRect )arg0 onPage:(id)arg1 flags:(NSUInteger)arg2 baseline:(id)arg3 ;


@end


#endif