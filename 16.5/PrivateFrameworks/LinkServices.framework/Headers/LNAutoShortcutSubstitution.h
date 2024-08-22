// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LNAUTOSHORTCUTSUBSTITUTION_H
#define LNAUTOSHORTCUTSUBSTITUTION_H

@class NSString, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface LNAutoShortcutSubstitution : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *actionIdentifier; // ivar: _actionIdentifier
@property (readonly, copy, nonatomic) NSArray *basePhraseTemplateSubstitutions; // ivar: _basePhraseTemplateSubstitutions


+(BOOL)supportsSecureCoding;
-(id)initWithActionIdentifier:(id)arg0 basePhraseTemplateSubstitutions:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif