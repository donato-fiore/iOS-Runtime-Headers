// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLSROLE_H
#define CLSROLE_H

@class NSArray;


#import "CLSObject.h"

@interface CLSRole : CLSObject

@property BOOL isEditable; // ivar: _isEditable
@property (copy, nonatomic) NSArray *privileges; // ivar: _privileges
@property (nonatomic) NSInteger sourceType; // ivar: _sourceType
@property (nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)stringForRoleType:(NSInteger)arg0 ;
-(id)_init;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif