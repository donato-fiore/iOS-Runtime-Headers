// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKCONCEPTIDENTIFIER_H
#define HKCONCEPTIDENTIFIER_H

@class NSString, NSNumber;
@protocol NSObject, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKConceptIdentifier : NSObject <NSObject, NSCopying, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isAdHoc;
@property (readonly, nonatomic) BOOL isInMemory;
@property (readonly, copy, nonatomic) NSNumber *numberRepresentation;
@property (readonly, nonatomic) NSInteger rawIdentifier; // ivar: _rawIdentifier
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)diastolicBloodPressure;
+(id)identifierWithNumber:(id)arg0 ;
+(id)identifierWithRawIdentifier:(NSInteger)arg0 ;
+(id)inMemoryConceptIdentifier;
+(id)medication;
+(id)root;
+(id)systolicBloodPressure;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRawIdentifier:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif