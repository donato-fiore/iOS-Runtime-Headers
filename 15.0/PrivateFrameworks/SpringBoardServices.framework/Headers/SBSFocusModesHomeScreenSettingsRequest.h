// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSFOCUSMODESHOMESCREENSETTINGSREQUEST_H
#define SBSFOCUSMODESHOMESCREENSETTINGSREQUEST_H

@class NSString, NSArray;
@protocol BSXPCSecureCoding;

#import <Foundation/Foundation.h>


@interface SBSFocusModesHomeScreenSettingsRequest : NSObject <BSXPCSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *focusModeIdentifier; // ivar: _focusModeIdentifier
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *listsToAdd; // ivar: _listsToAdd
@property (retain, nonatomic) NSArray *listsToRemove; // ivar: _listsToRemove
@property (readonly) Class superclass;


+(BOOL)supportsBSXPCSecureCoding;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(id)initWithFocusModeIdentifier:(id)arg0 ;
-(void)encodeWithBSXPCCoder:(id)arg0 ;


@end


#endif