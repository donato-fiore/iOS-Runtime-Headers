// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DAEDITPROPERTYACTION_H
#define DAEDITPROPERTYACTION_H

@class NSString;


#import "DAAction.h"

@interface DAEditPropertyAction : DAAction

@property (readonly, nonatomic) NSString *propertyName; // ivar: _propertyName
@property (readonly, nonatomic) NSString *propertyNamespace; // ivar: _propertyNamespace
@property (readonly, nonatomic) NSString *value; // ivar: _value


+(BOOL)supportsSecureCoding;
-(id)initWithChangedItem:(id)arg0 propertyName:(id)arg1 value:(id)arg2 propertyNamespace:(id)arg3 serverId:(id)arg4 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif