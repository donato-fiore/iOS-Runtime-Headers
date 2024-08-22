// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCEFUNCTIONARGUMENTSPEC_H
#define TSCEFUNCTIONARGUMENTSPEC_H


#import <Foundation/Foundation.h>


@interface TSCEFunctionArgumentSpec : NSObject {
    ? _argSpec;
}




+(?)argSpecWithType:(?)arg0 accessorMode:(?)arg1 rangeContext:(?)arg2 argumentContext:(?)arg3 disallowedTypesreferenceForGeometryOnly;
+(?)argSpecWithType:(?)arg0 accessorMode:(?)arg1 rangeContext:(?)arg2 argumentContext:(?)arg3 minValue:(?)arg4 minInclusive:(?)arg5 maxValue:(?)arg6 maxInclusive:(?)arg7 isInteger:(?)arg8 disallowedTypes:(?)arg9 disallowDuration:(?)arg10 disallowCurrency:(?)arg11 modeValues:(?)arg12 defaultModeIndex:(?)arg13 referenceForGeometryOnlyforceArrayMode;
+(?)argSpecWithType:(?)arg0 accessorMode:(?)arg1 rangeContext:(?)arg2 disallowedTypes:(?)arg3 disallowDurationdisallowCurrency;
+(?)argSpecWithType:(?)arg0 accessorMode:(?)arg1 rangeContext:(?)arg2 minValue:(?)arg3 minInclusive:(?)arg4 maxValue:(?)arg5 maxInclusive:(?)arg6 disallowedTypes:(?)arg7 disallowDurationdisallowCurrency;
+(?)argSpecWithType:(?)arg0 accessorMode:(?)arg1 rangeContext:(?)arg2 modeValuesdefaultModeIndex;
+(?)argSpecWithType:(?)arg0 accessorMode:(?)arg1 rangeContextargumentContext;
+(struct TSCEFunctionArgSpec )argSpecWithType:(char)arg0 accessorMode:(int)arg1 rangeContext:(unsigned char)arg2 ;


@end


#endif