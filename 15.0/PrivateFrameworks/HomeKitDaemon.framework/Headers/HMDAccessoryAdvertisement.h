// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDACCESSORYADVERTISEMENT_H
#define HMDACCESSORYADVERTISEMENT_H

@class HMAccessoryCategory, NSString;

#import <Foundation/Foundation.h>


@interface HMDAccessoryAdvertisement : NSObject

@property (readonly) NSInteger associationOptions;
@property (readonly, nonatomic) HMAccessoryCategory *category; // ivar: _category
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSString *name; // ivar: _name


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithIdentifier:(id)arg0 name:(id)arg1 category:(id)arg2 ;


@end


#endif