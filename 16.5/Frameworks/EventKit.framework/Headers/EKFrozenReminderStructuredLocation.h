// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKFROZENREMINDERSTRUCTUREDLOCATION_H
#define EKFROZENREMINDERSTRUCTUREDLOCATION_H

@class NSString;


#import "EKFrozenReminderObject.h"

@interface EKFrozenReminderStructuredLocation : EKFrozenReminderObject

@property (readonly) NSString *uniqueIdentifier;


+(BOOL)canCommitSelf;
+(Class)meltedClass;
+(id)uniqueIdentifierForREMObject:(id)arg0 ;
-(CGFloat)latitude;
-(CGFloat)longitude;
-(CGFloat)radius;
-(id)_structuredLocation;
-(id)address;
-(id)initWithAlternateUniverseObject:(id)arg0 inEventStore:(id)arg1 withUpdatedChildObjects:(id)arg2 ;
-(id)mapKitHandle;
-(id)remObjectID;
-(id)title;
-(id)updateParentToCommitSelf:(id)arg0 ;
-(id)updatedStructuredLocation;
-(id)uuid;
-(int)referenceFrame;
-(void)setLatitudeAndLongitudeFromAlternateUniverseObject:(id)arg0 inChangeSet:(id)arg1 ;


@end


#endif