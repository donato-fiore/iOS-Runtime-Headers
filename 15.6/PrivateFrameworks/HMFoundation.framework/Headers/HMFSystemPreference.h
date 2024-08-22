// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMFSYSTEMPREFERENCE_H
#define HMFSYSTEMPREFERENCE_H

@class NSArray, NSString;
@protocol HMFObject;


#import "HMFPreference.h"

@interface HMFSystemPreference : HMFPreference <HMFObject>



@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *domain; // ivar: _domain
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;


-(id)initWithKey:(id)arg0 options:(NSUInteger)arg1 defaultValue:(id)arg2 parent:(id)arg3 ;
-(id)initWithKey:(id)arg0 options:(NSUInteger)arg1 domain:(id)arg2 defaultValue:(id)arg3 ;
-(id)initWithKey:(id)arg0 options:(NSUInteger)arg1 domain:(id)arg2 defaultValue:(id)arg3 parent:(id)arg4 ;


@end


#endif