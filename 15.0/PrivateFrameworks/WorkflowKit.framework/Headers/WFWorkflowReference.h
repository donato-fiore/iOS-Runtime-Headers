// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFWORKFLOWREFERENCE_H
#define WFWORKFLOWREFERENCE_H

@class WFWorkflowDescriptor, NSString, NSDate, NSUserActivity;
@protocol WFNaming;


#import "WFIcon.h"
#import "WFWorkflowIcon.h"

@interface WFWorkflowReference : WFWorkflowDescriptor <WFNaming>



@property (readonly, nonatomic) NSUInteger actionCount; // ivar: _actionCount
@property (readonly, copy, nonatomic) NSString *actionsDescription; // ivar: _actionsDescription
@property (readonly, nonatomic) WFIcon *attributionIcon;
@property (readonly, nonatomic) NSString *attributionTitle;
@property (readonly, nonatomic) BOOL hiddenFromLibraryAndSync; // ivar: _hiddenFromLibraryAndSync
@property (readonly, copy, nonatomic) WFWorkflowIcon *icon; // ivar: _icon
@property (readonly, nonatomic) BOOL isDeleted; // ivar: _isDeleted
@property (readonly, nonatomic) NSDate *lastRunDate; // ivar: _lastRunDate
@property (readonly, nonatomic) NSDate *modificationDate; // ivar: _modificationDate
@property (readonly, nonatomic) NSInteger remoteQuarantineStatus; // ivar: _remoteQuarantineStatus
@property (readonly, copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly, nonatomic) NSUserActivity *userActivityForViewing;
@property (readonly, copy, nonatomic) NSString *wfName;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributionIconWithSize:(struct CGSize )arg0 scale:(CGFloat)arg1 rounded:(BOOL)arg2 ;
-(id)externalURLForRunningWithSource:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 name:(id)arg1 color:(NSInteger)arg2 glyphCharacter:(unsigned short)arg3 associatedAppBundleIdentifier:(id)arg4 subtitle:(id)arg5 actionsDescription:(id)arg6 actionCount:(NSUInteger)arg7 isDeleted:(BOOL)arg8 hiddenFromLibraryAndSync:(BOOL)arg9 modificationDate:(id)arg10 lastRunDate:(id)arg11 remoteQuarantineStatus:(NSInteger)arg12 ;
-(id)speakableString;
-(void)donateRunInteraction;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif