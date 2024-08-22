// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKSHARINGCONTEXT_H
#define CKSHARINGCONTEXT_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "CKAllowedSharingOptions.h"
#import "CKContainerSetupInfo.h"
#import "CKShare.h"

@interface CKSharingContext : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) CKAllowedSharingOptions *allowedOptions; // ivar: _allowedOptions
@property (retain, nonatomic) CKContainerSetupInfo *containerSetupInfo; // ivar: _containerSetupInfo
@property (retain, nonatomic) CKShare *share; // ivar: _share


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithShare:(id)arg0 containerSetupInfo:(id)arg1 allowedOptions:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif