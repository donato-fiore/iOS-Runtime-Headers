// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSFOCUSMODESHOMESCREENSETTINGSREQUEST_H
#define SBSFOCUSMODESHOMESCREENSETTINGSREQUEST_H

@class NSString, NSArray;
@protocol BSDescriptionProviding, BSXPCSecureCoding;

#import <Foundation/Foundation.h>


@interface SBSFocusModesHomeScreenSettingsRequest : NSObject <BSDescriptionProviding, BSXPCSecureCoding>



@property (nonatomic) BOOL appendExistingPages; // ivar: _appendExistingPages
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL excludeWallpaper; // ivar: _excludeWallpaper
@property (readonly, copy, nonatomic) NSString *focusModeIdentifier; // ivar: _focusModeIdentifier
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *listsToAdd; // ivar: _listsToAdd
@property (retain, nonatomic) NSArray *listsToRemove; // ivar: _listsToRemove
@property (retain, nonatomic) NSArray *proactivePages; // ivar: _proactivePages
@property (nonatomic) CGFloat snapshotDelay; // ivar: _snapshotDelay
@property (nonatomic) CGFloat snapshotScale; // ivar: _snapshotScale
@property (readonly) Class superclass;


+(BOOL)supportsBSXPCSecureCoding;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(id)initWithFocusModeIdentifier:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)encodeWithBSXPCCoder:(id)arg0 ;


@end


#endif