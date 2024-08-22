// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFAIRDROPNODE_H
#define SFAIRDROPNODE_H

@class NSPersonNameComponents, NSSet, NSString, NSDate, NSUUID, CURangingMeasurement, NSNumber;

#import <Foundation/Foundation.h>


@interface SFAirDropNode : NSObject {
    *__SFOperation _sender;
    NSPersonNameComponents *_nameComponents;
}


@property (retain) NSSet *actualHandles; // ivar: _actualHandles
@property (getter=isClassroom) BOOL classroom; // ivar: _classroom
@property (getter=isClassroomCourse) BOOL classroomCourse; // ivar: _classroomCourse
@property (getter=isclassroomGroup) BOOL classroomGroup; // ivar: _classroomGroup
@property (retain, nonatomic) NSSet *contactIDs; // ivar: _contactIDs
@property (retain) NSString *contactIdentifier; // ivar: _contactIdentifier
@property (copy, nonatomic) NSString *derivedIntentIdentifier; // ivar: _derivedIntentIdentifier
@property (getter=isDisabled) BOOL disabled; // ivar: _disabled
@property (readonly) NSDate *discoveryDate; // ivar: _discoveryDate
@property (retain) *CGImage displayIcon; // ivar: _displayIcon
@property (retain) NSString *displayName; // ivar: _displayName
@property (retain) NSSet *formattedHandles; // ivar: _formattedHandles
@property (readonly, getter=isKnown) BOOL known;
@property (getter=isMe) BOOL me; // ivar: _me
@property (retain) NSString *model; // ivar: _model
@property (getter=isMonogram) BOOL monogram; // ivar: _monogram
@property (retain) id *node; // ivar: _node
@property (retain) NSUUID *nodeIdentifier; // ivar: _nodeIdentifier
@property (retain, nonatomic) CURangingMeasurement *rangingMeasurement; // ivar: _rangingMeasurement
@property (getter=isRapport) BOOL rapport; // ivar: _rapport
@property (retain) NSString *realName; // ivar: _realName
@property (retain) NSString *secondaryName; // ivar: _secondaryName
@property NSInteger selectionReason; // ivar: _selectionReason
@property (getter=isSuggestion) BOOL suggestion; // ivar: _suggestion
@property (retain) NSNumber *suggestionIndex; // ivar: _suggestionIndex
@property (readonly) BOOL supportsCredentials; // ivar: _supportsCredentials
@property (readonly) BOOL supportsFMF; // ivar: _supportsFMF
@property (readonly) BOOL supportsMixedTypes; // ivar: _supportsMixedTypes
@property (readonly) BOOL supportsPasses; // ivar: _supportsPasses
@property (retain) NSString *transportBundleID; // ivar: _transportBundleID
@property (getter=isUltraWideBindCapable) BOOL ultraWideBindCapable; // ivar: _ultraWideBindCapable
@property (getter=isUnknown) BOOL unknown; // ivar: _unknown


+(id)nodeWithSFNode:(struct __SFNode *)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)displayNameForLocale:(id)arg0 ;
-(id)init;
-(void)appendDiscoveryInfoToDisplayName:(id)arg0 ;
-(void)cancelSend;
-(void)dealloc;
-(void)handleOperationCallback:(struct __SFOperation *)arg0 event:(NSInteger)arg1 withResults:(id)arg2 ;
-(void)startSendForBundleID:(id)arg0 sessionID:(id)arg1 items:(id)arg2 description:(id)arg3 previewImage:(struct CGImage *)arg4 fromShareSheet:(BOOL)arg5 ;
-(void)updateDisplayName;
-(void)updateWithSFNode:(struct __SFNode *)arg0 ;


@end


#endif