// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPASSPRESENTATIONCONTEXT_H
#define PKPASSPRESENTATIONCONTEXT_H

@class NSArray, NSData;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "PKBackgroundContactlessInterfaceSessionController.h"

@interface PKPassPresentationContext : NSObject

@property (copy, nonatomic) NSArray *additionalPassUniqueIdentifiers; // ivar: _additionalPassUniqueIdentifiers
@property (weak, nonatomic) PKBackgroundContactlessInterfaceSessionController *backgroundSession; // ivar: _backgroundSession
@property (retain, nonatomic) NSData *externalizedAuthenticationContext; // ivar: _externalizedAuthenticationContext
@property (nonatomic, getter=isFieldDetect) BOOL fieldDetect; // ivar: _fieldDetect
@property (nonatomic, getter=wantsForcedPayment) BOOL forcePayment; // ivar: _forcePayment
@property (nonatomic, getter=wasForcedFromButton) BOOL forcedFromButton; // ivar: _forcedFromButton
@property (nonatomic) BOOL limitServerLoad; // ivar: _limitServerLoad
@property (nonatomic, getter=wantsPersistentCardEmulation) BOOL persistentCardEmulation; // ivar: _persistentCardEmulation
@property (nonatomic, getter=isPostPayment) BOOL postPayment; // ivar: _postPayment
@property (nonatomic) BOOL presentFanned; // ivar: _presentFanned
@property (nonatomic) NSUInteger presentationSource; // ivar: _presentationSource
@property (nonatomic) NSInteger standaloneTransactionType; // ivar: _standaloneTransactionType
@property (copy, nonatomic) NSObject<NSCopying> *userInfo; // ivar: _userInfo
@property (nonatomic) BOOL wasAutomaticallySelected; // ivar: _wasAutomaticallySelected


+(id)contextWithAdditionalPassUniqueIdentifiers:(id)arg0 ;
+(id)contextWithWasAutomaticallySelected:(BOOL)arg0 additionalPassUniqueIdentifiers:(id)arg1 ;
+(id)contextWithWasAutomaticallySelected:(BOOL)arg0 additionalPassUniqueIdentifiers:(id)arg1 userInfo:(id)arg2 ;
-(id)description;


@end


#endif