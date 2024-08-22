// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUROLLBACKOPTIONS_H
#define SUROLLBACKOPTIONS_H

@protocol NSSecureCoding, NSCopying;


#import "SUOptionsBase.h"

@interface SURollbackOptions : SUOptionsBase <NSSecureCoding, NSCopying>

 {
    BOOL _promptForConsent;
    BOOL _promptForPasscode;
}


@property (nonatomic) BOOL cancelActiveUpdate; // ivar: _cancelActiveUpdate
@property (nonatomic) BOOL promptForConsent;
@property (nonatomic) BOOL promptForPasscode;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif