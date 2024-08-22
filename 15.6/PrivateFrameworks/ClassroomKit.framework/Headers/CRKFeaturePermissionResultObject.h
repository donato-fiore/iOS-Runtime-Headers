// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRKFEATUREPERMISSIONRESULTOBJECT_H
#define CRKFEATUREPERMISSIONRESULTOBJECT_H

@class NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CRKFeaturePermissionResultObject : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSDictionary *dictionaryValue;
@property (nonatomic, getter=isModifiable) BOOL modifiable; // ivar: _modifiable
@property (nonatomic) NSUInteger permission; // ivar: _permission


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif