// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFWORKFLOWRUNNINGCONTEXT_H
#define WFWORKFLOWRUNNINGCONTEXT_H

@class NSString, NSDate, NSURL;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "WFContextualAction.h"
#import "WFContextualActionContext.h"

@interface WFWorkflowRunningContext : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) BOOL allowsDialogNotifications; // ivar: _allowsDialogNotifications
@property (copy, nonatomic) NSString *automationType; // ivar: _automationType
@property (retain, nonatomic) WFContextualAction *contextualAction; // ivar: _contextualAction
@property (retain, nonatomic) WFContextualActionContext *contextualActionContext; // ivar: _contextualActionContext
@property (retain, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL isShortcutsApp;
@property (copy, nonatomic) NSString *originatingBundleIdentifier; // ivar: _originatingBundleIdentifier
@property (nonatomic) NSUInteger outputBehavior; // ivar: _outputBehavior
@property (retain, nonatomic) NSURL *outputRootIfRunningInFinder; // ivar: _outputRootIfRunningInFinder
@property (nonatomic) NSUInteger presentationMode; // ivar: _presentationMode
@property (readonly, copy, nonatomic) NSString *progressCategory; // ivar: _progressCategory
@property (copy, nonatomic) NSString *rootWorkflowIdentifier; // ivar: _rootWorkflowIdentifier
@property (copy, nonatomic) NSString *runSource; // ivar: _runSource
@property (copy, nonatomic) NSString *workflowIdentifier; // ivar: _workflowIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)addProgressSubscriberUsingPublishingHandler:(id)arg0 ;
-(id)copyWithNewIdentity;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithWorkflowIdentifier:(id)arg0 ;
-(id)progressForPublishingWithTotalUnitCount:(NSInteger)arg0 cancellationHandler:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)removeProgressSubscriber:(id)arg0 ;


@end


#endif