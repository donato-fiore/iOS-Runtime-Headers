// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKAPPLICATIONPERMISSIONGROUP_H
#define CKAPPLICATIONPERMISSIONGROUP_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CKApplicationPermissionGroup : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSArray *applicationBundleIDs; // ivar: _applicationBundleIDs
@property (copy, nonatomic) NSArray *containerIDs; // ivar: _containerIDs
@property (nonatomic) NSUInteger enabledPermissions; // ivar: _enabledPermissions


+(BOOL)supportsSecureCoding;
-(id)CKPropertiesDescription;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif