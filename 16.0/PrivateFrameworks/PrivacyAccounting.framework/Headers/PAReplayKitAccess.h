// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PAREPLAYKITACCESS_H
#define PAREPLAYKITACCESS_H



#import "PAAccess.h"
#import "PAApplication.h"

@interface PAReplayKitAccess : PAAccess

@property (readonly, nonatomic) PAApplication *broadcaster; // ivar: _broadcaster


+(BOOL)supportsSecureCoding;
+(id)accessWithAccessor:(id)arg0 ;
+(id)accessWithAccessor:(id)arg0 fromBroadcaster:(id)arg1 ;
+(id)eventStreamIdentifier;
-(BOOL)isEqualToAccess:(id)arg0 withOptions:(NSUInteger)arg1 ;
-(NSUInteger)hashWithOptions:(NSUInteger)arg0 ;
-(id)JSONObject;
-(id)category;
-(id)copyWithNewBroadcaster:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithAccessor:(id)arg0 ;
-(id)initWithAccessor:(id)arg0 broadcaster:(id)arg1 identifier:(id)arg2 kind:(NSInteger)arg3 ;
-(id)initWithAccessor:(id)arg0 fromBroadcaster:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)proto;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif