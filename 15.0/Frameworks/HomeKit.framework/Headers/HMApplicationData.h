// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMAPPLICATIONDATA_H
#define HMAPPLICATIONDATA_H

@class NSArray, NSSet, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface HMApplicationData : NSObject

@property (readonly, copy, nonatomic) NSArray *allKeys;
@property (readonly, copy, nonatomic) NSArray *allValues;
@property (retain, nonatomic) NSSet *allowedObjectClasses; // ivar: _allowedObjectClasses
@property (retain, nonatomic) NSMutableDictionary *applicationData; // ivar: _applicationData


-(BOOL)isAllowedClassForObject:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionary;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithContentsOfDictionary:(id)arg0 ;
-(id)initWithContentsOfDictionary:(id)arg0 allowedObjectClasses:(id)arg1 ;
-(id)objectForKey:(id)arg0 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;
-(void)setObject:(id)arg0 forKeyedSubscript:(id)arg1 ;


@end


#endif