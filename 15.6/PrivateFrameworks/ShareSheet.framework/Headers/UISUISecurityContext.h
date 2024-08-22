// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UISUISECURITYCONTEXT_H
#define UISUISECURITYCONTEXT_H

@class NSMutableArray, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface UISUISecurityContext : NSObject <NSSecureCoding>

 {
    NSInteger _activationCount;
    NSMutableArray *_URLsBeingAccessed;
}


@property (readonly, nonatomic) BOOL isActive;
@property (readonly, nonatomic) NSArray *securityScopedResources; // ivar: _securityScopedResources


+(BOOL)supportsSecureCoding;
-(id)accessibleURLs;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSecurityScopedResources:(id)arg0 ;
-(id)securityScopedResourcesMatchingPredicate:(id)arg0 ;
-(void)activate;
-(void)deactivate;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif