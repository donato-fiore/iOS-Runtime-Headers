// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DACACTIVITYDESCRIPTOR_H
#define DACACTIVITYDESCRIPTOR_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "DACUnknownActivityPolicy.h"

@interface DACActivityDescriptor : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic, getter=isLocalOnly) BOOL localOnly; // ivar: _localOnly
@property (readonly, nonatomic) DACUnknownActivityPolicy *policy; // ivar: _policy
@property (readonly, nonatomic) NSUInteger priority; // ivar: _priority


+(BOOL)supportsSecureCoding;
+(id)activityDescriptorWithIdentifier:(id)arg0 priority:(NSUInteger)arg1 policy:(id)arg2 ;
+(id)comparator:(SEL)arg0 ;
+(id)localOnlyActivityDescriptorWithIdentifier:(id)arg0 priority:(NSUInteger)arg1 policy:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToActivityDescriptor:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithIdentifier:(id)arg0 priority:(NSUInteger)arg1 policy:(id)arg2 localOnly:(BOOL)arg3 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif