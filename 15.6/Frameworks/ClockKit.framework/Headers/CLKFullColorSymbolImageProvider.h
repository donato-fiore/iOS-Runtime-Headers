// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLKFULLCOLORSYMBOLIMAGEPROVIDER_H
#define CLKFULLCOLORSYMBOLIMAGEPROVIDER_H

@class NSString, UIImage, NSNumber, UIColor;


#import "CLKFullColorImageProvider.h"

@interface CLKFullColorSymbolImageProvider : CLKFullColorImageProvider {
    BOOL _finalized;
    NSString *_privateSystemName;
    UIImage *_symbolImage;
}


@property (nonatomic) BOOL ignoreHierarchicalLayers; // ivar: _ignoreHierarchicalLayers
@property (retain, nonatomic) NSNumber *overridePointSize; // ivar: _overridePointSize
@property (readonly, nonatomic) NSNumber *pointSize; // ivar: _pointSize
@property (retain, nonatomic) UIColor *secondaryTintColor; // ivar: _secondaryTintColor
@property (readonly, nonatomic) NSString *systemName; // ivar: _systemName
@property (retain, nonatomic) UIColor *tintColor;
@property (readonly, nonatomic) NSInteger weight; // ivar: _weight


+(BOOL)supportsSecureCoding;
+(id)_symbolImageProviderWithSystemName:(id)arg0 ;
+(id)symbolImageProviderWithSystemName:(id)arg0 ;
-(BOOL)_isHierarchicalSymbol;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)prefersFilterOverTransition;
-(NSUInteger)hash;
-(id)JSONObjectRepresentationWritingResourcesToBundlePath:(id)arg0 ;
-(id)_initWithSystemName:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)createSymbolImage;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithJSONObjectRepresentation:(id)arg0 bundle:(id)arg1 ;
-(id)initWithSystemName:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)finalizeWithPointSize:(id)arg0 weight:(NSInteger)arg1 maxSDKSize:(struct CGSize )arg2 maxDeviceSize:(struct CGSize )arg3 cornerRadius:(CGFloat)arg4 ;


@end


#endif