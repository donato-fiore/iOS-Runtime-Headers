// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDUSERDOMAINCONCEPTPERSISTABLEPROCESSINGSTATE_H
#define HDUSERDOMAINCONCEPTPERSISTABLEPROCESSINGSTATE_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HDUserDomainConceptPersistableProcessingState : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSInteger anchor; // ivar: _anchor
@property (readonly, nonatomic) NSInteger maximumPropertyType; // ivar: _maximumPropertyType
@property (readonly, nonatomic) NSInteger ontologyVersion; // ivar: _ontologyVersion


+(BOOL)fetchFromKeyValueDomain:(id)arg0 stateOut:(*id)arg1 error:(*id)arg2 ;
+(BOOL)supportsSecureCoding;
-(BOOL)persistInKeyValueDomain:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithAnchor:(NSInteger)arg0 ontologyVersion:(NSInteger)arg1 maximumPropertyType:(NSInteger)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif