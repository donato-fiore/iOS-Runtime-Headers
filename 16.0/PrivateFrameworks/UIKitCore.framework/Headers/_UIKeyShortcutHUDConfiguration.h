// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIKEYSHORTCUTHUDCONFIGURATION_H
#define _UIKEYSHORTCUTHUDCONFIGURATION_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "_UIKeyShortcutHUDClientTraits.h"
#import "_UIKeyShortcutHUDModel.h"

@interface _UIKeyShortcutHUDConfiguration : NSObject <NSSecureCoding>



@property (retain, nonatomic) _UIKeyShortcutHUDClientTraits *clientTraits; // ivar: _clientTraits
@property (nonatomic) NSInteger initialHeldModifierFlags; // ivar: _initialHeldModifierFlags
@property (retain, nonatomic) _UIKeyShortcutHUDModel *model; // ivar: _model
@property (nonatomic) NSInteger presentedModifierFlag; // ivar: _presentedModifierFlag
@property (nonatomic, getter=isSearching) BOOL searching; // ivar: _searching


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif