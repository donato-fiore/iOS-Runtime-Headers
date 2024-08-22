// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVTARCHIVERBASEDDOMAIN_H
#define AVTARCHIVERBASEDDOMAIN_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AVTArchiverBasedDomain : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *domainIdentifier; // ivar: _domainIdentifier
@property (readonly, copy, nonatomic) NSString *primaryAvatarIdentifier; // ivar: _primaryAvatarIdentifier


+(BOOL)supportsSecureCoding;
-(id)domainBySettingPrimaryAvatarIdentifier:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDomainIdentifier:(id)arg0 primaryAvatarIdentifier:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif