// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AFCONVERSATIONITEM_H
#define AFCONVERSATIONITEM_H

@class NSString;
@protocol AFConversationStorable, NSCopying;

#import <Foundation/Foundation.h>

#import "AFMutableConversationItem.h"

@interface AFConversationItem : NSObject <AFConversationStorable, NSCopying>

 {
    AFMutableConversationItem *_delegateItem;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isImmersiveExperience;
-(BOOL)isSupplemental;
-(BOOL)isTransient;
-(BOOL)isVirgin;
-(NSInteger)presentationState;
-(NSInteger)type;
-(id)aceCommandIdentifier;
-(id)aceObject;
-(id)associatedDataStore;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dialogPhase;
-(id)identifier;
-(id)initWithDelegateItem:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 revisionIdentifier:(id)arg1 type:(NSInteger)arg2 aceObject:(id)arg3 dialogPhase:(id)arg4 presentationState:(NSInteger)arg5 aceCommandIdentifier:(id)arg6 virgin:(BOOL)arg7 transient:(BOOL)arg8 supplemental:(BOOL)arg9 immersiveExperience:(BOOL)arg10 associatedDataStore:(id)arg11 ;
-(id)initWithType:(NSInteger)arg0 aceObject:(id)arg1 dialogPhase:(id)arg2 presentationState:(NSInteger)arg3 aceCommandIdentifier:(id)arg4 virgin:(BOOL)arg5 transient:(BOOL)arg6 supplemental:(BOOL)arg7 immersiveExperience:(BOOL)arg8 associatedDataStore:(id)arg9 ;
-(id)revisionIdentifier;


@end


#endif