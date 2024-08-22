// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKCONCEPTRELATIONSHIP_H
#define HKCONCEPTRELATIONSHIP_H

@class NSString;
@protocol NSObject, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "HKConcept.h"

@interface HKConceptRelationship : NSObject <NSObject, NSCopying, NSSecureCoding>

 {
    HKConcept *_weakDestination;
    HKConcept *_destination;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=isDeleted) BOOL deleted; // ivar: _deleted
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) HKConcept *destination;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger type; // ivar: _type
@property (readonly, nonatomic) NSInteger version; // ivar: _version


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(NSInteger)arg0 destination:(id)arg1 ;
-(id)initWithType:(NSInteger)arg0 destination:(id)arg1 version:(NSInteger)arg2 deleted:(BOOL)arg3 ;
-(id)initWithType:(NSInteger)arg0 destination:(id)arg1 weakDestination:(id)arg2 version:(NSInteger)arg3 deleted:(BOOL)arg4 ;
-(id)initWithType:(NSInteger)arg0 weakDestination:(id)arg1 version:(NSInteger)arg2 deleted:(BOOL)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif