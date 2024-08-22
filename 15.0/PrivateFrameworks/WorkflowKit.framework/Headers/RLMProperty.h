// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RLMPROPERTY_H
#define RLMPROPERTY_H

@class NSString;

#import <Foundation/Foundation.h>


@interface RLMProperty : NSObject

@property (readonly, nonatomic) BOOL array; // ivar: _array
@property (retain, nonatomic) NSString *columnName; // ivar: _columnName
@property (copy, nonatomic) NSString *getterName; // ivar: _getterName
@property (nonatomic) SEL getterSel; // ivar: _getterSel
@property (nonatomic) NSUInteger index; // ivar: _index
@property (nonatomic) BOOL indexed; // ivar: _indexed
@property (nonatomic) BOOL isPrimary; // ivar: _isPrimary
@property (readonly, copy, nonatomic) NSString *linkOriginPropertyName; // ivar: _linkOriginPropertyName
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSString *objectClassName; // ivar: _objectClassName
@property (nonatomic) BOOL optional; // ivar: _optional
@property (copy, nonatomic) NSString *setterName; // ivar: _setterName
@property (nonatomic) SEL setterSel; // ivar: _setterSel
@property (nonatomic) *objc_ivar swiftIvar; // ivar: _swiftIvar
@property (nonatomic) int type; // ivar: _type


+(id)propertyForObjectStoreProperty:(*void)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToProperty:(id)arg0 ;
-(id)copyWithNewName:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initSwiftLinkingObjectsPropertyWithName:(id)arg0 ivar:(struct objc_ivar *)arg1 objectClassName:(id)arg2 linkOriginPropertyName:(id)arg3 ;
-(id)initSwiftListPropertyWithName:(id)arg0 instance:(id)arg1 ;
-(id)initSwiftOptionalPropertyWithName:(id)arg0 indexed:(BOOL)arg1 ivar:(struct objc_ivar *)arg2 propertyType:(int)arg3 ;
-(id)initSwiftPropertyWithName:(id)arg0 indexed:(BOOL)arg1 linkPropertyDescriptor:(id)arg2 property:(struct objc_property *)arg3 instance:(id)arg4 ;
-(id)initWithName:(id)arg0 indexed:(BOOL)arg1 linkPropertyDescriptor:(id)arg2 property:(struct objc_property *)arg3 ;
-(id)initWithName:(id)arg0 type:(int)arg1 objectClassName:(id)arg2 linkOriginPropertyName:(id)arg3 indexed:(BOOL)arg4 optional:(BOOL)arg5 ;
-(struct Property )objectStoreCopy:(id)arg0 ;
-(void)parseObjcProperty:(struct objc_property *)arg0 readOnly:(*BOOL)arg1 computed:(*BOOL)arg2 rawType:(*id)arg3 ;
-(void)updateAccessors;


@end


#endif