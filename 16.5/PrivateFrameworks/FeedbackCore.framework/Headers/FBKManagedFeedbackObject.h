// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FBKMANAGEDFEEDBACKOBJECT_H
#define FBKMANAGEDFEEDBACKOBJECT_H

@class NSManagedObject, NSNumber;



@interface FBKManagedFeedbackObject : NSManagedObject

@property (retain) NSNumber *ID;
@property (retain) NSNumber *remoteID;


+(id)entityName;
+(id)importFromJSONArray:(id)arg0 intoContext:(id)arg1 ;
+(id)importFromJSONObject:(id)arg0 intoContext:(id)arg1 ;
-(BOOL)isEqualToFBKObject:(id)arg0 ;
-(id)entityName;
-(void)setPropertiesFromJSONObject:(id)arg0 ;


@end


#endif