// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNAGGREGATEKEYDESCRIPTOR_H
#define CNAGGREGATEKEYDESCRIPTOR_H

@class NSString, NSArray;
@protocol CNKeyDescriptor_Private;

#import <Foundation/Foundation.h>

#import "CNContactKeyVector.h"

@interface CNAggregateKeyDescriptor : NSObject <CNKeyDescriptor_Private>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *keyDescriptors; // ivar: _keyDescriptors
@property (copy, nonatomic) NSString *privateDescription; // ivar: _privateDescription
@property (readonly) Class superclass;
@property (retain, nonatomic) CNContactKeyVector *unauthorizedKeys; // ivar: _unauthorizedKeys


+(BOOL)supportsSecureCoding;
+(id)keyDescriptorWithKeyDescriptors:(id)arg0 description:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_cn_ignorableKeys;
-(id)_cn_optionalKeys;
-(id)_cn_recursiveDescriptionWithPrefix:(id)arg0 ;
-(id)_cn_requiredKeys;
-(id)_recursiveDescription;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKeyDescriptors:(id)arg0 description:(id)arg1 ;
-(void)_cn_executeGetterForRepresentedKeys:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif