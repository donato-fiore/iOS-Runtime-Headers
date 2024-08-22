// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUPURGEOPTIONS_H
#define SUPURGEOPTIONS_H

@protocol NSSecureCoding, NSCopying;


#import "SUOptionsBase.h"

@interface SUPurgeOptions : SUOptionsBase <NSSecureCoding, NSCopying>



@property (nonatomic) BOOL notifyUser; // ivar: _notifyUser
@property (nonatomic) BOOL userRequested; // ivar: _userRequested


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif