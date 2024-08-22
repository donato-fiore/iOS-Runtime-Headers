// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDUSERDOMAINCONCEPTPROCESSINGSTATE_H
#define HDUSERDOMAINCONCEPTPROCESSINGSTATE_H

@class HKOntologyVersion;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface HDUserDomainConceptProcessingState : NSObject <NSCopying>



@property (readonly, nonatomic) NSInteger anchor; // ivar: _anchor
@property (readonly, nonatomic) NSInteger maximumPropertyType; // ivar: _maximumPropertyType
@property (readonly, copy, nonatomic) HKOntologyVersion *ontologyVersion; // ivar: _ontologyVersion


+(id)fetchFromKeyValueDomain:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)persistInKeyValueDomain:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)hash;
-(id)copyByUpdatingAnchor:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithAnchor:(NSInteger)arg0 ontologyVersion:(id)arg1 maximumPropertyType:(NSInteger)arg2 ;


@end


#endif