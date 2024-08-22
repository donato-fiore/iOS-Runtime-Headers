// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMMEDIACONTENTPROFILEACCESSCONTROL_H
#define HMMEDIACONTENTPROFILEACCESSCONTROL_H

@class NSMutableSet, NSArray;
@protocol NSCopying, NSMutableCopying;


#import "HMAccessControl.h"

@interface HMMediaContentProfileAccessControl : HMAccessControl <NSCopying, NSMutableCopying>

 {
    NSMutableSet *_internalAccessories;
}


@property (readonly, copy) NSArray *accessories;


+(BOOL)isAccessorySupported:(id)arg0 ;
+(id)shortDescription;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)descriptionWithPointer:(BOOL)arg0 ;
-(id)initWithUser:(id)arg0 ;
-(id)initWithUser:(id)arg0 accessories:(id)arg1 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)shortDescription;


@end


#endif