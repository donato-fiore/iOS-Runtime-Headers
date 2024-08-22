// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ISSYMBOL_H
#define ISSYMBOL_H

@class IFSymbol;



@interface ISSymbol : IFSymbol



+(id)_generateVariantKeyFromOptions:(NSUInteger)arg0 ;
+(id)symbolForType:(id)arg0 ;
+(id)symbolForTypeIdentifier:(id)arg0 error:(*id)arg1 ;
+(id)symbolForTypeIdentifier:(id)arg0 withResolutionStrategy:(NSInteger)arg1 variantOptions:(NSUInteger)arg2 error:(*id)arg3 ;
+(id)symbolForURL:(id)arg0 ;


@end


#endif