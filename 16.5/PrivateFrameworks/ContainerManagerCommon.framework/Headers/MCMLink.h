// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCMLINK_H
#define MCMLINK_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "MCMContainerIdentityMinimal.h"

@interface MCMLink : NSObject <NSCopying>



@property (readonly, nonatomic) NSUInteger attributes; // ivar: _attributes
@property (readonly, nonatomic) MCMContainerIdentityMinimal *containerIdentity; // ivar: _containerIdentity
@property (readonly, nonatomic) BOOL implied; // ivar: _implied
@property (readonly, nonatomic) MCMContainerIdentityMinimal *originContainerIdentity; // ivar: _originContainerIdentity


+(id)linkFromPlist:(id)arg0 originContainerIdentity:(id)arg1 userIdentityCache:(id)arg2 error:(*NSUInteger)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToLink:(id)arg0 ;
-(BOOL)isFuzzyEqualToLink:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithLibsystemLink:(struct container_link_s *)arg0 defaultUserIdentity:(id)arg1 userIdentityCache:(id)arg2 error:(*NSUInteger)arg3 ;
-(id)initWithOriginContainerIdentity:(id)arg0 containerIdentity:(id)arg1 attributes:(NSUInteger)arg2 implied:(BOOL)arg3 ;
-(id)initWithPlist:(id)arg0 originContainerIdentity:(id)arg1 userIdentityCache:(id)arg2 error:(*NSUInteger)arg3 ;
-(id)initWithVersion1PlistDictionary:(id)arg0 originContainerIdentity:(id)arg1 userIdentityCache:(id)arg2 error:(*NSUInteger)arg3 ;
-(id)linkByMergingWithLink:(id)arg0 ;
-(id)linkBySubtractingAttributes:(NSUInteger)arg0 ;
-(id)linkInverted;
-(id)plist;


@end


#endif