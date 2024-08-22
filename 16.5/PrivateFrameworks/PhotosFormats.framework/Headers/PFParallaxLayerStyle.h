// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFPARALLAXLAYERSTYLE_H
#define PFPARALLAXLAYERSTYLE_H

@class NSArray, NSString, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PFParallaxLayerStyle : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *colorSuggestions; // ivar: _colorSuggestions
@property (readonly, copy, nonatomic) NSString *kind; // ivar: _kind
@property (readonly, copy, nonatomic) NSDictionary *parameters; // ivar: _parameters


+(BOOL)isSegmentedStyle:(id)arg0 ;
+(BOOL)styleKind:(id)arg0 supportsParameter:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(BOOL)validateParameterKey:(id)arg0 value:(id)arg1 error:(*id)arg2 ;
+(BOOL)validateParameters:(id)arg0 error:(*id)arg1 ;
+(id)deserializeColorSuggestions:(id)arg0 error:(*id)arg1 ;
+(id)deserializeParameter:(id)arg0 forKey:(id)arg1 error:(*id)arg2 ;
+(id)deserializeParameters:(id)arg0 error:(*id)arg1 ;
+(id)dictionaryWithStyle:(id)arg0 ;
+(id)serializeColorSuggestions:(id)arg0 ;
+(id)serializeParameter:(id)arg0 forKey:(id)arg1 ;
+(id)serializeParameters:(id)arg0 ;
+(id)styleWithDictionary:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToParallaxLayerStyle:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKind:(id)arg0 parameters:(id)arg1 colorSuggestions:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif