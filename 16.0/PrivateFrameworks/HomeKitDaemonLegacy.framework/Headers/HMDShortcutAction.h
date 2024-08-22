// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDSHORTCUTACTION_H
#define HMDSHORTCUTACTION_H

@class NSData, WFHomeWorkflow, WFHomeWorkflowController;
@protocol NSCopying;


#import "HMDAction.h"

@interface HMDShortcutAction : HMDAction <NSCopying>

 {
    NSData *_shortcutData;
    WFHomeWorkflow *_shortcut;
    WFHomeWorkflowController *_controller;
}




+(BOOL)supportsSecureCoding;
+(id)actionWithDictionaryRepresentation:(id)arg0 home:(id)arg1 ;
+(id)actionWithDictionaryRepresentation:(id)arg0 home:(id)arg1 actionSet:(id)arg2 ;
+(id)logCategory;
-(BOOL)isAssociatedWithAccessory:(id)arg0 ;
-(BOOL)isUnsecuringAction;
-(BOOL)requiresDeviceUnlock;
-(Class)modelClass;
-(NSUInteger)entitlementsForNotification;
-(NSUInteger)type;
-(id)associatedAccessories;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithModelObject:(id)arg0 parent:(id)arg1 error:(*id)arg2 ;
-(id)initWithSerializedShortcut:(id)arg0 uuid:(id)arg1 actionSet:(id)arg2 ;
-(id)modelObjectWithChangeType:(NSUInteger)arg0 version:(NSInteger)arg1 ;
-(id)removeShortcut;
-(id)stateDump;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)executeWithSource:(NSUInteger)arg0 clientName:(id)arg1 completionHandler:(id)arg2 ;
-(void)transactionObjectUpdated:(id)arg0 newValues:(id)arg1 message:(id)arg2 ;


@end


#endif