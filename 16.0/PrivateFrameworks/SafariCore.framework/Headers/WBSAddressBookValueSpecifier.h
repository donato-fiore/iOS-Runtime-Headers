// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSADDRESSBOOKVALUESPECIFIER_H
#define WBSADDRESSBOOKVALUESPECIFIER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface WBSAddressBookValueSpecifier : NSObject

@property (readonly, nonatomic) NSString *category; // ivar: _category
@property (readonly, nonatomic) NSString *component; // ivar: _component
@property (readonly, nonatomic) NSString *label; // ivar: _label
@property (readonly, nonatomic) NSString *parentProperty; // ivar: _parentProperty
@property (readonly, nonatomic) NSString *property; // ivar: _property


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithProperty:(id)arg0 component:(id)arg1 label:(id)arg2 ;
-(id)initWithProperty:(id)arg0 component:(id)arg1 label:(id)arg2 category:(id)arg3 parentProperty:(id)arg4 ;


@end


#endif