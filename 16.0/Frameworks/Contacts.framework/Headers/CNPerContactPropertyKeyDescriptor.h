// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNPERCONTACTPROPERTYKEYDESCRIPTOR_H
#define CNPERCONTACTPROPERTYKEYDESCRIPTOR_H

@class NSString, NSMutableDictionary;
@protocol CNKeyDescriptor_Private, CNKeyDescriptor;

#import <Foundation/Foundation.h>


@interface CNPerContactPropertyKeyDescriptor : NSObject <CNKeyDescriptor_Private, CNKeyDescriptor>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableDictionary *propertiesByIdentifier; // ivar: _propertiesByIdentifier
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)_cn_ignorableKeys;
-(id)_cn_optionalKeys;
-(id)_cn_requiredKeys;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)_cn_executeGetterForRepresentedKeys:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setKeysToFetch:(id)arg0 forContactIdentifier:(id)arg1 ;


@end


#endif