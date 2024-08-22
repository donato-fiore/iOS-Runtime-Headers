// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSREMOTEALERTPRESENTATIONTARGET_H
#define SBSREMOTEALERTPRESENTATIONTARGET_H

@class NSString, BSProcessHandle;
@protocol BSDescriptionProviding, BSXPCCoding, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SBSRemoteAlertPresentationTarget : NSObject <BSDescriptionProviding, BSXPCCoding, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL requiresFullscreenPresentation; // ivar: _requiresFullscreenPresentation
@property (copy, nonatomic) NSString *scenePersistentIdentifier; // ivar: _scenePersistentIdentifier
@property (nonatomic) BOOL shouldDismissOnUILock; // ivar: _shouldDismissOnUILock
@property (readonly) Class superclass;
@property (readonly, nonatomic) BSProcessHandle *targetProcess; // ivar: _targetProcess


+(BOOL)supportsSecureCoding;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTargetProcess:(id)arg0 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif