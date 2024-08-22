// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STCONTACTADDRESS_H
#define STCONTACTADDRESS_H

@class NSString, NSURL;


#import "STSiriModelObject.h"

@interface STContactAddress : STSiriModelObject {
    NSInteger _type;
    NSString *_stringValue;
    NSURL *_contactIdentifier;
    NSString *_contactInternalGUID;
}




+(BOOL)supportsSecureCoding;
-(NSInteger)type;
-(id)_aceContextObjectValue;
-(id)contactIdentifier;
-(id)contactInternalGUID;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStringValue:(id)arg0 ;
-(id)initWithType:(NSInteger)arg0 stringValue:(id)arg1 ;
-(id)initWithType:(NSInteger)arg0 stringValue:(id)arg1 contactIdentifier:(id)arg2 contactInternalGUID:(id)arg3 ;
-(id)stringValue;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif