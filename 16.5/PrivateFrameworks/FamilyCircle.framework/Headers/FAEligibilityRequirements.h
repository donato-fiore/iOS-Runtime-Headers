// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FAELIGIBILITYREQUIREMENTS_H
#define FAELIGIBILITYREQUIREMENTS_H

@class NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface FAEligibilityRequirements : NSObject <NSSecureCoding>

 {
    NSDictionary *_properties;
}




+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)initWithPropertyRequirements:(id)arg0 ;
-(id)requirementsForPropertyName:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif