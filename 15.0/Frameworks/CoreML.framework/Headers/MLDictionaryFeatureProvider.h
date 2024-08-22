// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MLDICTIONARYFEATUREPROVIDER_H
#define MLDICTIONARYFEATUREPROVIDER_H

@class NSDictionary, NSSet;
@protocol MLFeatureProvider, NSFastEnumeration, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MLDictionaryFeatureProvider : NSObject <MLFeatureProvider, NSFastEnumeration, NSSecureCoding>



@property (retain, nonatomic) NSDictionary *dictionary; // ivar: _dictionary
@property (readonly, nonatomic) NSSet *featureNames;


+(BOOL)supportsSecureCoding;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)featureValueForName:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 error:(*id)arg1 ;
-(id)initWithFeatureProvider:(id)arg0 ;
-(id)initWithFeatureProvider:(id)arg0 featureNames:(id)arg1 ;
-(id)initWithFeatureValueDictionary:(id)arg0 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif