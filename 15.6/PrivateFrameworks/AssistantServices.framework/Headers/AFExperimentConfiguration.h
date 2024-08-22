// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AFEXPERIMENTCONFIGURATION_H
#define AFEXPERIMENTCONFIGURATION_H

@class NSString, NSArray;
@protocol NSCopying, NSSecureCoding, AFDictionaryConvertible;

#import <Foundation/Foundation.h>

#import "AFExperimentGroup.h"

@interface AFExperimentConfiguration : NSObject <NSCopying, NSSecureCoding, AFDictionaryConvertible>



@property (readonly, copy, nonatomic) AFExperimentGroup *controlGroup; // ivar: _controlGroup
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSArray *experimentGroups; // ivar: _experimentGroups
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSString *salt; // ivar: _salt
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger type; // ivar: _type
@property (readonly, copy, nonatomic) NSString *version; // ivar: _version


+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_descriptionWithIndent:(NSUInteger)arg0 ;
-(id)buildDictionaryRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)initWithType:(NSInteger)arg0 identifier:(id)arg1 version:(id)arg2 controlGroup:(id)arg3 experimentGroups:(id)arg4 salt:(id)arg5 ;
-(id)mutatedCopyWithMutator:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif