// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PETEVENTPROPERTY_H
#define PETEVENTPROPERTY_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PETEventProperty : NSObject

@property (readonly, nonatomic) NSUInteger cardinality;
@property (readonly, nonatomic) NSString *longestValueString;
@property (readonly, nonatomic) NSString *name; // ivar: _name


+(id)freeValuedPropertyWithName:(id)arg0 ;
+(id)propertyWithName:(id)arg0 enumMapping:(id)arg1 ;
+(id)propertyWithName:(id)arg0 enumMapping:(id)arg1 autoSanitizeValues:(BOOL)arg2 ;
+(id)propertyWithName:(id)arg0 possibleValues:(id)arg1 ;
+(id)propertyWithName:(id)arg0 possibleValues:(id)arg1 autoSanitizeValues:(BOOL)arg2 ;
+(id)propertyWithName:(id)arg0 range:(struct _NSRange )arg1 ;
+(id)propertyWithName:(id)arg0 range:(struct _NSRange )arg1 clampValues:(BOOL)arg2 ;
+(id)propertyWithName:(id)arg0 rangeMin:(NSUInteger)arg1 rangeMax:(NSUInteger)arg2 ;
-(BOOL)isValidValue:(id)arg0 ;
-(id)_loggingKeyStringRepresentationForValue:(id)arg0 ;
-(id)initWithName:(id)arg0 ;
-(id)possibleValues;
-(struct _NSRange )validRange;


@end


#endif