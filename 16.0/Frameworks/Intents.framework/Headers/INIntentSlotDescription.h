// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ININTENTSLOTDESCRIPTION_H
#define ININTENTSLOTDESCRIPTION_H

@class NSString, NSArray, NSNumber;
@protocol INIntentSlotDescriptionExport, NSCopying;

#import <Foundation/Foundation.h>

#import "INCodableAttribute.h"

@interface INIntentSlotDescription : NSObject <INIntentSlotDescriptionExport, NSCopying>



@property (readonly, copy, nonatomic) INCodableAttribute *codableAttribute; // ivar: _codableAttribute
@property (readonly, copy, nonatomic) NSString *dataPropertyName; // ivar: _dataPropertyName
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSArray *defaultValueSelectorStrings; // ivar: _defaultValueSelectorStrings
@property (readonly, nonatomic) SEL deprecatedResolveSelector;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *facadePropertyName; // ivar: _facadePropertyName
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isEnum;
@property (readonly, nonatomic) BOOL isExtended; // ivar: _isExtended
@property (readonly, nonatomic) BOOL isPrivate; // ivar: _isPrivate
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, copy, nonatomic) NSArray *provideOptionsSelectorStrings; // ivar: _provideOptionsSelectorStrings
@property (retain, nonatomic) NSNumber *rank; // ivar: _rank
@property (readonly, nonatomic) Class resolutionResultClass; // ivar: _resolutionResultClass
@property (readonly, nonatomic) SEL resolveSelector;
@property (readonly, copy, nonatomic) NSArray *resolveSelectorStrings; // ivar: _resolveSelectorStrings
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger tag; // ivar: _tag
@property (readonly, nonatomic) NSInteger valueStyle; // ivar: _valueStyle
@property (readonly, nonatomic) NSInteger valueType; // ivar: _valueType


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithName:(id)arg0 tag:(NSUInteger)arg1 facadePropertyName:(id)arg2 dataPropertyName:(id)arg3 isExtended:(BOOL)arg4 isPrivate:(BOOL)arg5 valueType:(NSInteger)arg6 valueStyle:(NSInteger)arg7 codableAttribute:(id)arg8 defaultValueSelectorStrings:(id)arg9 provideOptionsSelectorStrings:(id)arg10 resolutionResultClass:(Class)arg11 resolveSelectors:(SEL)arg12 ;
-(id)initWithName:(id)arg0 tag:(NSUInteger)arg1 facadePropertyName:(id)arg2 dataPropertyName:(id)arg3 isExtended:(BOOL)arg4 isPrivate:(BOOL)arg5 valueType:(NSInteger)arg6 valueStyle:(NSInteger)arg7 defaultValueSelectorStrings:(id)arg8 provideOptionsSelectorStrings:(id)arg9 resolutionResultClass:(Class)arg10 resolveSelectors:(SEL)arg11 ;
-(id)initWithName:(id)arg0 tag:(NSUInteger)arg1 facadePropertyName:(id)arg2 dataPropertyName:(id)arg3 valueType:(NSInteger)arg4 valueStyle:(NSInteger)arg5 isExtended:(BOOL)arg6 isPrivate:(BOOL)arg7 resolveSelectors:(SEL)arg8 ;
-(id)localizeValue:(id)arg0 forLanguage:(id)arg1 ;
-(id)localizeValue:(id)arg0 withLocalizer:(id)arg1 ;
-(id)valueForSlotComposer:(id)arg0 ;
-(void)setValue:(id)arg0 forSlotComposer:(id)arg1 ;


@end


#endif