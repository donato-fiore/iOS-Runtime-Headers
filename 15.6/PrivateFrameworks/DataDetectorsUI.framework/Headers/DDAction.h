// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DDACTION_H
#define DDACTION_H

@class NSString, NSDictionary, NSURL, UIImage, CNContact, UIViewController;
@protocol NSCoding, NSSecureCoding, DDActionDelegate;

#import <Foundation/Foundation.h>

#import "DDAction.h"

@interface DDAction : NSObject <NSCoding, NSSecureCoding>

 {
    ? _result;
    ? _coalescedResult;
    *__CFArray _associatedResults;
    NSString *_ics;
    NSDictionary *_context;
    NSURL *_url;
    BOOL _cachedCoalescedResult;
    BOOL _cachedAssociatedResults;
    BOOL _hasCompanion;
}


@property (readonly, nonatomic) UIImage *compactIcon;
@property (readonly, nonatomic) NSString *compactTitle;
@property (nonatomic) BOOL companion; // ivar: _isCompanion
@property (readonly, weak, nonatomic) DDAction *companionAction;
@property (retain) CNContact *contact; // ivar: _contact
@property (weak, nonatomic) NSObject<DDActionDelegate> *delegate; // ivar: _delegate
@property (nonatomic) int hostApplication; // ivar: _hostApplication
@property (readonly, nonatomic) UIImage *icon;
@property (nonatomic) BOOL isDefaultAction; // ivar: _isDefaultAction
@property (retain, nonatomic) UIViewController *viewController; // ivar: _viewController


+(?)actionWithURL:(?)arg0 resultcontext;
+(?)actionsWithURL:(?)arg0 resultcontext;
+(?)defaultActionWithURL:(?)arg0 resultcontext;
+(BOOL)actionAvailableForContact:(id)arg0 ;
+(BOOL)isAvailable;
+(BOOL)supportsSecureCoding;
+(id)clientActionsDelegate;
+(id)contextByAddingValue:(id)arg0 toKey:(id)arg1 inContext:(id)arg2 ;
+(id)encodableContextWithContext:(id)arg0 ;
+(void)setClientActionsDelegate:(id)arg0 ;
-(?)coalescedResult;
-(?)initWithURL:(?)arg0 resultcontext;
-(?)result;
-(BOOL)canBePerformedByOpeningURL;
-(BOOL)canBePerformedWhenDeviceIsLocked;
-(BOOL)hasUserInterface;
-(id)context;
-(id)description;
-(id)displayNameForEmails:(id)arg0 phoneNumbers:(id)arg1 ;
-(id)feedbackIdentifier;
-(id)generateIdentifier;
-(id)initWithCoder:(id)arg0 ;
-(id)localizedName;
-(id)localizedSubItemName;
-(id)notificationIconBundleIdentifier;
-(id)notificationTitle;
-(id)notificationURL;
-(id)subtitle;
-(id)url;
-(id)variantIconName;
-(int)interactionType;
-(struct __CFArray *)associatedResults;
-(void)_openURL:(id)arg0 fromView:(id)arg1 options:(id)arg2 ;
-(void)_openURL:(id)arg0 options:(id)arg1 fallbackURL:(id)arg2 ;
-(void)_performFromView:(id)arg0 byOpeningURL:(id)arg1 ;
-(void)_performFromView:(id)arg0 byOpeningURL:(id)arg1 disableAppLink:(BOOL)arg2 ;
-(void)adaptForPresentationInPopover:(BOOL)arg0 ;
-(void)addToRecents;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)invalidate;
-(void)perform;
-(void)performFromView:(id)arg0 ;
-(void)prepareViewControllerForActionController:(id)arg0 ;
-(void)setupPopoverPresentationController:(id)arg0 view:(id)arg1 ;


@end


#endif