// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FBKPARTICIPANT_H
#define FBKPARTICIPANT_H

@class NSSet, UIImage, NSString, NSNumber;


#import "FBKManagedFeedbackObject.h"

@interface FBKParticipant : FBKManagedFeedbackObject

@property (retain, nonatomic) NSSet *assignedFeedback;
@property (readonly, nonatomic) UIImage *contactImage;
@property (copy, nonatomic) NSString *emailAddress;
@property (copy, nonatomic) NSString *familyName;
@property (retain, nonatomic) NSSet *followups;
@property (readonly, nonatomic) NSString *fullName;
@property (copy, nonatomic) NSString *givenName;
@property (retain, nonatomic) NSSet *originatedFeedback;
@property (copy, nonatomic) NSNumber *remoteID;
@property (retain, nonatomic) NSSet *teams;


+(id)currentParticipantForContext:(id)arg0 ;
+(id)entityName;
+(id)fetchRequest;
+(id)keyPathsForValuesAffectingFullName;
+(id)sortDescriptors;
-(void)setPropertiesFromJSONObject:(id)arg0 ;


@end


#endif