// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKCONTAINERSETUPINFO_H
#define CKCONTAINERSETUPINFO_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "CKAccountOverrideInfo.h"
#import "CKContainerID.h"
#import "CKContainerOptions.h"

@interface CKContainerSetupInfo : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) CKAccountOverrideInfo *accountInfoOverride;
@property (readonly, copy, nonatomic) CKAccountOverrideInfo *accountOverrideInfo;
@property (retain, nonatomic) CKContainerID *containerID; // ivar: _containerID
@property (retain, nonatomic) CKContainerOptions *containerOptions; // ivar: _containerOptions


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)hashString;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif