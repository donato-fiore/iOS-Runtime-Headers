// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKAUXILIARYCAPABILITYREQUIREMENTKEYMATERIAL_H
#define PKAUXILIARYCAPABILITYREQUIREMENTKEYMATERIAL_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface PKAuxiliaryCapabilityRequirementKeyMaterial : NSObject

@property (retain, nonatomic) NSArray *contents; // ivar: _contents
@property (retain, nonatomic) NSArray *rootAttestation; // ivar: _rootAttestation


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToAuxiliaryCapabilityRequirementKey:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithKeyMaterialContents:(id)arg0 ;


@end


#endif