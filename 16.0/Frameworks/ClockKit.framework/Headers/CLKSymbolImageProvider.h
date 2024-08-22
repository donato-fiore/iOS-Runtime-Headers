// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLKSYMBOLIMAGEPROVIDER_H
#define CLKSYMBOLIMAGEPROVIDER_H

@class NSString, NSNumber, UIColor;


#import "CLKImageProvider.h"

@interface CLKSymbolImageProvider : CLKImageProvider {
    BOOL _finalized;
    NSString *_privateSystemName;
    BOOL _hierarchicalSymbol;
}


@property (nonatomic) BOOL ignoreHierarchicalLayers; // ivar: _ignoreHierarchicalLayers
@property (readonly, nonatomic) BOOL isTwoPiece;
@property (retain, nonatomic) NSNumber *overridePointSize; // ivar: _overridePointSize
@property (readonly, nonatomic) NSNumber *pointSize; // ivar: _pointSize
@property (retain, nonatomic) UIColor *secondaryTintColor; // ivar: _secondaryTintColor
@property (readonly, nonatomic) NSString *systemName; // ivar: _systemName
@property (readonly, nonatomic) NSInteger weight; // ivar: _weight


+(BOOL)supportsSecureCoding;
+(id)_symbolImageProviderWithSystemName:(id)arg0 ;
+(id)symbolImageProviderWithSystemName:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)JSONObjectRepresentationWritingResourcesToBundlePath:(id)arg0 ;
-(id)_configuration;
-(id)_createSymbolImageWithConfiguration:(id)arg0 ;
-(id)_createSymbolImageWithForeground:(id)arg0 background:(id)arg1 ;
-(id)_initWithSystemName:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)createSymbolImage;
-(id)createSymbolImageForType:(NSInteger)arg0 color:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithJSONObjectRepresentation:(id)arg0 bundle:(id)arg1 ;
-(id)initWithSystemName:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)finalizeWithPointSize:(id)arg0 weight:(NSInteger)arg1 maxSDKSize:(struct CGSize )arg2 maxDeviceSize:(struct CGSize )arg3 cornerRadius:(CGFloat)arg4 ;
-(void)finalizeWithPointSize:(id)arg0 weight:(NSInteger)arg1 maxSDKSize:(struct CGSize )arg2 maxDeviceSize:(struct CGSize )arg3 maskToCircle:(BOOL)arg4 ;


@end


#endif