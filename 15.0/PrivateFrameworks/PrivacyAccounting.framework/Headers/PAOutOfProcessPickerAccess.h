// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PAOUTOFPROCESSPICKERACCESS_H
#define PAOUTOFPROCESSPICKERACCESS_H



#import "PAAccess.h"

@interface PAOutOfProcessPickerAccess : PAAccess

@property (readonly, nonatomic) NSInteger pickerType; // ivar: _pickerType


+(BOOL)supportsSecureCoding;
+(id)accessWithAccessor:(id)arg0 forType:(NSInteger)arg1 ;
+(id)accessWithAuditToken:(struct ? )arg0 forType:(NSInteger)arg1 ;
+(id)eventStreamIdentifier;
-(BOOL)isEqualToAccess:(id)arg0 withOptions:(NSUInteger)arg1 ;
-(NSUInteger)hashWithOptions:(NSUInteger)arg0 ;
-(id)JSONObject;
-(id)analyticsCategory;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionForCategory;
-(id)initWithAccessor:(id)arg0 forType:(NSInteger)arg1 ;
-(id)initWithAccessor:(id)arg0 identifier:(id)arg1 kind:(NSInteger)arg2 forType:(NSInteger)arg3 ;
-(id)initWithAuditToken:(struct ? )arg0 forType:(NSInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)proto;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif