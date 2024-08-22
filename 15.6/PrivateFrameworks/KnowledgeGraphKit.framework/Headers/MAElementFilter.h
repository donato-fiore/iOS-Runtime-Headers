// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MAELEMENTFILTER_H
#define MAELEMENTFILTER_H

@class NSArray, NSSet, NSDictionary, NSString;

#import <Foundation/Foundation.h>

#import "KGElementIdentifierSet.h"

@interface MAElementFilter : NSObject

@property (readonly, copy, nonatomic) KGElementIdentifierSet *domains; // ivar: _domains
@property (readonly, nonatomic) NSArray *kgOptionalLabels;
@property (readonly, nonatomic) NSArray *kgRequiredLabels;
@property (readonly, copy, nonatomic) NSSet *labels; // ivar: _labels
@property (readonly, nonatomic) NSDictionary *properties; // ivar: _properties
@property (readonly, nonatomic) NSString *visualString;


+(BOOL)scanDomains:(*id)arg0 withScanner:(id)arg1 ;
+(BOOL)scanElementFilterLabels:(*id)arg0 domains:(*id)arg1 properties:(*id)arg2 withScanner:(id)arg3 ;
+(BOOL)scanInstance:(*id)arg0 withScanner:(id)arg1 ;
+(BOOL)scanLabels:(*id)arg0 withScanner:(id)arg1 ;
+(BOOL)scanProperties:(*id)arg0 withScanner:(id)arg1 ;
+(BOOL)scanPropertyOption:(*id)arg0 withScanner:(id)arg1 ;
+(BOOL)scanPropertyValue:(*id)arg0 withScanner:(id)arg1 ;
+(id)any;
+(id)scanFilterWithScanner:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)matchesDomainOfElement:(id)arg0 ;
-(BOOL)matchesElement:(id)arg0 ;
-(BOOL)matchesLabelOfElement:(id)arg0 ;
-(BOOL)matchesPropertiesOfElement:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)filterBySettingProperties:(id)arg0 ;
-(id)initWithLabel:(id)arg0 domain:(unsigned short)arg1 ;
-(id)initWithLabel:(id)arg0 domain:(unsigned short)arg1 properties:(id)arg2 ;
-(id)initWithLabel:(id)arg0 domains:(id)arg1 properties:(id)arg2 ;
-(id)initWithLabels:(id)arg0 domain:(unsigned short)arg1 properties:(id)arg2 ;
-(id)initWithLabels:(id)arg0 domains:(id)arg1 properties:(id)arg2 ;
-(void)_appendPropertyOption:(id)arg0 toString:(id)arg1 ;
-(void)appendVisualStringToString:(id)arg0 ;


@end


#endif