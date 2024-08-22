// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GCDEVICEBUTTONINPUTDESCRIPTION_H
#define GCDEVICEBUTTONINPUTDESCRIPTION_H

@class NSString, NSSet;


#import "GCDeviceElementDescription.h"

@interface GCDeviceButtonInputDescription : GCDeviceElementDescription {
    NSUInteger _attributes;
    NSUInteger _sourceAttributes;
    NSString *_name;
    NSSet *_additionalAliases;
    NSString *_nameLocalizationKey;
    NSString *_symbolName;
}


@property (readonly, getter=isDigital) BOOL digital;
@property (readonly) NSInteger sourceExtendedEventFieldIndex; // ivar: _sourceExtendedEventFieldIndex
@property (readonly) NSString *sourceNameLocalizationKey; // ivar: _sourceNameLocalizationKey
@property (readonly) float sourcePressedThreshold; // ivar: _sourcePressedThreshold
@property (readonly) NSString *sourceSymbolName; // ivar: _sourceSymbolName
@property (readonly) float sourceTouchedThreshold; // ivar: _sourceTouchedThreshold
@property (readonly) BOOL supportsTouch;


+(BOOL)supportsSecureCoding;
-(BOOL)isBoundToSystemGesture;
-(BOOL)isMappableToSystemGestures;
-(BOOL)isRemappable;
-(id)additionalAliases;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 additionalAliases:(id)arg1 attributes:(NSUInteger)arg2 nameLocalizationKey:(id)arg3 symbolName:(id)arg4 sourceAttributes:(NSUInteger)arg5 sourceExtendedEventField:(NSInteger)arg6 ;
-(id)initWithName:(id)arg0 additionalAliases:(id)arg1 attributes:(NSUInteger)arg2 nameLocalizationKey:(id)arg3 symbolName:(id)arg4 sourceAttributes:(NSUInteger)arg5 sourceNameLocalizationKey:(id)arg6 sourceSymbolName:(id)arg7 sourceTouchedThreshold:(float)arg8 sourcePressedThreshold:(float)arg9 sourceExtendedEventField:(NSInteger)arg10 ;
-(id)name;
-(id)nameLocalizationKey;
-(id)symbolName;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif