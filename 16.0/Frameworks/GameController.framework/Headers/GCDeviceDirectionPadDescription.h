// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GCDEVICEDIRECTIONPADDESCRIPTION_H
#define GCDEVICEDIRECTIONPADDESCRIPTION_H

@class NSString, NSSet;


#import "GCDeviceElementDescription.h"

@interface GCDeviceDirectionPadDescription : GCDeviceElementDescription {
    NSUInteger _attributes;
    NSUInteger _sourceAttributes;
    NSString *_name;
    NSSet *_additionalAliases;
    NSString *_nameLocalizationKey;
    NSString *_symbolName;
}


@property (readonly, getter=isDigital) BOOL digital;
@property (readonly) NSUInteger sourceDownExtendedEventFieldIndex; // ivar: _sourceDownExtendedEventFieldIndex
@property (readonly) NSUInteger sourceLeftExtendedEventFieldIndex; // ivar: _sourceLeftExtendedEventFieldIndex
@property (readonly) NSString *sourceNameLocalizationKey; // ivar: _sourceNameLocalizationKey
@property (readonly) float sourcePressedThreshold; // ivar: _sourcePressedThreshold
@property (readonly) NSUInteger sourceRightExtendedEventFieldIndex; // ivar: _sourceRightExtendedEventFieldIndex
@property (readonly) NSString *sourceSymbolName; // ivar: _sourceSymbolName
@property (readonly) NSUInteger sourceUpExtendedEventFieldIndex; // ivar: _sourceUpExtendedEventFieldIndex


+(BOOL)supportsSecureCoding;
-(BOOL)isBoundToSystemGesture;
-(BOOL)isMappableToSystemGestures;
-(BOOL)isRemappable;
-(id)additionalAliases;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 additionalAliases:(id)arg1 attributes:(NSUInteger)arg2 nameLocalizationKey:(id)arg3 symbolName:(id)arg4 sourceAttributes:(NSUInteger)arg5 sourceNameLocalizationKey:(id)arg6 sourceSymbolName:(id)arg7 sourcePressedThreshold:(float)arg8 sourceUpExtendedEventField:(NSUInteger)arg9 sourceDownExtendedEventField:(NSUInteger)arg10 sourceLeftExtendedEventField:(NSUInteger)arg11 sourceRightExtendedEventField:(NSUInteger)arg12 ;
-(id)initWithName:(id)arg0 additionalAliases:(id)arg1 attributes:(NSUInteger)arg2 nameLocalizationKey:(id)arg3 symbolName:(id)arg4 sourceAttributes:(NSUInteger)arg5 sourceUpExtendedEventField:(NSUInteger)arg6 sourceDownExtendedEventField:(NSUInteger)arg7 sourceLeftExtendedEventField:(NSUInteger)arg8 sourceRightExtendedEventField:(NSUInteger)arg9 ;
-(id)name;
-(id)nameLocalizationKey;
-(id)symbolName;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif