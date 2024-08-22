// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKCONCEPTRELATIONSHIP_H
#define HKCONCEPTRELATIONSHIP_H

@class NSString;
@protocol NSObject, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "HKConcept.h"

@interface HKConceptRelationship : NSObject <NSObject, NSCopying, NSSecureCoding>

 {
    NSString *_name;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) HKConcept *destination; // ivar: _destination
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger identifier; // ivar: _identifier
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)relationshipWithIdentifier:(NSInteger)arg0 type:(NSInteger)arg1 destination:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(NSInteger)arg0 type:(NSInteger)arg1 name:(id)arg2 destination:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif