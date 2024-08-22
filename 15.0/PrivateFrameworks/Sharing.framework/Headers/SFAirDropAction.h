// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFAIRDROPACTION_H
#define SFAIRDROPACTION_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SFAirDropAction : NSObject <NSSecureCoding>



@property (copy, nonatomic) id *actionHandler; // ivar: _actionHandler
@property (readonly, copy, nonatomic) NSString *actionIdentifier; // ivar: _actionIdentifier
@property (copy, nonatomic) NSString *localizedTitle; // ivar: _localizedTitle
@property (nonatomic) NSUInteger maxTransferState; // ivar: _maxTransferState
@property (nonatomic) NSUInteger minRequiredTransferState; // ivar: _minRequiredTransferState
@property (nonatomic) BOOL requiresUnlockedUI; // ivar: _requiresUnlockedUI
@property (nonatomic) BOOL shouldUpdateUserResponse; // ivar: _shouldUpdateUserResponse
@property (copy, nonatomic) NSString *singleItemLocalizedTitle; // ivar: _singleItemLocalizedTitle
@property (readonly, copy, nonatomic) NSString *transferIdentifier; // ivar: _transferIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTransferIdentifier:(id)arg0 actionIdentifier:(id)arg1 title:(id)arg2 singleItemTitle:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)triggerAction;


@end


#endif