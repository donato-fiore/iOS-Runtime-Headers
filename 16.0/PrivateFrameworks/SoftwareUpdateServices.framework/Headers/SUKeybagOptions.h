// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUKEYBAGOPTIONS_H
#define SUKEYBAGOPTIONS_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "SUDescriptor.h"

@interface SUKeybagOptions : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) SUDescriptor *descriptor; // ivar: _descriptor
@property (nonatomic) int keybagType; // ivar: _keybagType
@property (retain, nonatomic) NSString *passcode; // ivar: _passcode


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif