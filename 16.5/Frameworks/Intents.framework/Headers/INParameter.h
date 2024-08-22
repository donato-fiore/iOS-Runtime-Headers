// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INPARAMETER_H
#define INPARAMETER_H

@class NSMutableDictionary, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface INParameter : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSMutableDictionary *_indexesForSubKeyPaths; // ivar: _indexesForSubKeyPaths
@property (readonly, copy, nonatomic) NSString *_subscriptedKeyPath;
@property (retain, nonatomic) Class parameterClass; // ivar: _parameterClass
@property (copy, nonatomic) NSString *parameterKeyPath; // ivar: _parameterKeyPath


+(BOOL)supportsSecureCoding;
+(id)parameterForClass:(Class)arg0 keyPath:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToParameter:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)indexForSubKeyPath:(id)arg0 ;
-(id)_dictionaryRepresentation;
-(id)_parameterValueForParameterizedObject:(id)arg0 ;
-(id)_sanitizedKeyPathForKeyPath:(id)arg0 removingSubscripts:(BOOL)arg1 ;
-(id)_valueOfObject:(id)arg0 forRemainingKeyPath:(id)arg1 inFullyQualifiedKeyPath:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionAtIndent:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)parameterValue;
-(id)parameterizedObject;
-(void)_setIndexesForKeyPathWithSubscripts:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setIndex:(NSUInteger)arg0 forSubKeyPath:(id)arg1 ;


@end


#endif