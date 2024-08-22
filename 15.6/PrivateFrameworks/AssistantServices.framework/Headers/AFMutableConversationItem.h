// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AFMUTABLECONVERSATIONITEM_H
#define AFMUTABLECONVERSATIONITEM_H

@class NSString, AceObject, NSUUID;
@protocol AFConversationStorable, NSCopying;

#import <Foundation/Foundation.h>

#import "AFDataStore.h"
#import "AFDialogPhase.h"

@interface AFMutableConversationItem : NSObject <AFConversationStorable, NSCopying>



@property (copy, nonatomic) NSString *aceCommandIdentifier; // ivar: _aceCommandIdentifier
@property (retain, nonatomic) AceObject *aceObject; // ivar: _aceObject
@property (readonly, nonatomic) AFDataStore *associatedDataStore; // ivar: _associatedDataStore
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) AFDialogPhase *dialogPhase; // ivar: _dialogPhase
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (nonatomic, getter=isImmersiveExperience) BOOL immersiveExperience; // ivar: _immersiveExperience
@property (nonatomic) NSInteger presentationState; // ivar: _presentationState
@property (readonly, copy, nonatomic) NSUUID *revisionIdentifier; // ivar: _revisionIdentifier
@property (readonly) Class superclass;
@property (nonatomic, getter=isSupplemental) BOOL supplemental; // ivar: _supplemental
@property (nonatomic, getter=isTransient) BOOL transient; // ivar: _transient
@property (nonatomic) NSInteger type; // ivar: _type
@property (nonatomic, getter=isVirgin) BOOL virgin; // ivar: _virgin


-(NSInteger)_presentationStateForPropertyListString:(id)arg0 ;
-(NSInteger)_typeForPropertyListString:(id)arg0 ;
-(id)_propertyListStringForPresentationState;
-(id)_propertyListStringForType;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithIdentifier:(id)arg0 revisionIdentifier:(id)arg1 type:(NSInteger)arg2 aceObject:(id)arg3 dialogPhase:(id)arg4 presentationState:(NSInteger)arg5 aceCommandIdentifier:(id)arg6 virgin:(BOOL)arg7 transient:(BOOL)arg8 supplemental:(BOOL)arg9 immersiveExperience:(BOOL)arg10 associatedDataStore:(id)arg11 ;
-(id)initWithIdentifier:(id)arg0 type:(NSInteger)arg1 aceObject:(id)arg2 dialogPhase:(id)arg3 presentationState:(NSInteger)arg4 aceCommandIdentifier:(id)arg5 virgin:(BOOL)arg6 transient:(BOOL)arg7 supplemental:(BOOL)arg8 immersiveExperience:(BOOL)arg9 associatedDataStore:(id)arg10 ;
-(id)initWithPropertyListRepresentation:(id)arg0 ;
-(id)initWithType:(NSInteger)arg0 aceObject:(id)arg1 dialogPhase:(id)arg2 presentationState:(NSInteger)arg3 aceCommandIdentifier:(id)arg4 virgin:(BOOL)arg5 transient:(BOOL)arg6 supplemental:(BOOL)arg7 immersiveExperience:(BOOL)arg8 associatedDataStore:(id)arg9 ;
-(id)propertyListRepresentation;
-(void)_didMutate;


@end


#endif