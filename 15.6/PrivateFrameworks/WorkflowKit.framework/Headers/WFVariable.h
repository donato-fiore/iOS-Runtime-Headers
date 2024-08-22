// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFVARIABLE_H
#define WFVARIABLE_H

@class NSString, NSArray, NSHashTable, NSDictionary, WFImage, NSSet;
@protocol WFVariableStringContent, NSCopying, WFVariableSerialization, WFVariableProvider;

#import <Foundation/Foundation.h>

#import "WFIcon.h"

@interface WFVariable : NSObject <WFVariableStringContent, NSCopying, WFVariableSerialization>



@property (readonly, nonatomic) NSString *UUID;
@property (readonly, nonatomic) NSArray *aggrandizements; // ivar: _aggrandizements
@property (readonly, nonatomic, getter=isAvailable) BOOL available;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *defaultName;
@property (readonly, nonatomic) NSHashTable *delegates; // ivar: _delegates
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSDictionary *dictionary; // ivar: _dictionary
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) WFIcon *icon;
@property (readonly, nonatomic) WFImage *iconImage;
@property (readonly, nonatomic) NSString *iconSymbolName;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *nameIncludingPropertyName;
@property (readonly, nonatomic) NSString *propertyName;
@property (readonly, nonatomic, getter=isRenamed) BOOL renamed;
@property (readonly, nonatomic) NSSet *requiredAccessResources;
@property (readonly, nonatomic) BOOL requiresModernVariableSupport;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsAggrandizements;
@property (readonly, nonatomic) NSString *type;
@property (readonly, weak, nonatomic) NSObject<WFVariableProvider> *variableProvider;


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)wf_lengthInVariableString;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithDictionary:(id)arg0 variableProvider:(id)arg1 ;
-(id)initWithSerializedRepresentation:(id)arg0 variableProvider:(id)arg1 parameter:(id)arg2 ;
-(id)possibleAggrandizedContentClasses;
-(id)possibleAggrandizedContentClassesWithContext:(id)arg0 ;
-(id)possibleContentClasses;
-(id)possibleContentClassesWithContext:(id)arg0 ;
-(id)serializedRepresentation;
-(id)variableBySettingAggrandizements:(id)arg0 ;
-(void)addDelegate:(id)arg0 ;
-(void)getContentWithContext:(id)arg0 completionHandler:(id)arg1 ;
-(void)getContentWithContext:(id)arg0 trackContentAttribution:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)getFileRepresentationWithContext:(id)arg0 completionHandler:(id)arg1 ;
-(void)getObjectRepresentationForClass:(Class)arg0 context:(id)arg1 completionHandler:(id)arg2 ;
-(void)removeDelegate:(id)arg0 ;
-(void)retrieveContentCollectionWithVariableSource:(id)arg0 completionHandler:(id)arg1 ;
-(void)variableProvider:(id)arg0 variableNameDidChangeTo:(id)arg1 ;
-(void)variableProvider:(id)arg0 variableWasMoved:(id)arg1 ;
-(void)variableProviderDidInvalidateOutputDetails:(id)arg0 ;
-(void)variableUpdated;
-(void)wf_getContentItemsWithContext:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif