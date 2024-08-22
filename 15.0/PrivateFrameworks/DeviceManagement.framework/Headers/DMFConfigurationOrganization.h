// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DMFCONFIGURATIONORGANIZATION_H
#define DMFCONFIGURATIONORGANIZATION_H

@class NSString, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DMFConfigurationOrganization : NSObject <NSSecureCoding>



@property (nonatomic) BOOL active; // ivar: _active
@property (copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSArray *registeredConfigurationSources; // ivar: _registeredConfigurationSources
@property (copy, nonatomic) NSString *type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(id)debugDescription;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif