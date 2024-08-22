// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHVIDEOXPCREQUEST_H
#define PHVIDEOXPCREQUEST_H



#import "PHResourceRequest.h"
#import "PHVideoRequestBehaviorSpec.h"

@interface PHVideoXPCRequest : PHResourceRequest

@property (readonly, nonatomic) PHVideoRequestBehaviorSpec *behaviorSpec; // ivar: _behaviorSpec
@property (readonly, nonatomic) CGSize size; // ivar: _size


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTaskIdentifier:(id)arg0 assetObjectID:(id)arg1 size:(struct CGSize )arg2 behavior:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif