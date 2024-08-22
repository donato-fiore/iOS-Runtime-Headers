// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INVOICESHORTCUT_H
#define INVOICESHORTCUT_H

@class NSUUID, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "INShortcut.h"

@interface INVoiceShortcut : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSString *invocationPhrase; // ivar: _invocationPhrase
@property (readonly, copy, nonatomic) INShortcut *shortcut; // ivar: _shortcut


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)_initWithIdentifier:(id)arg0 invocationPhrase:(id)arg1 shortcut:(id)arg2 ;
-(id)_initWithVCVoiceShortcut:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIntent:(id)arg0 ;
-(id)initWithUserActivity:(id)arg0 ;
-(id)intent;
-(id)userActivity;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif