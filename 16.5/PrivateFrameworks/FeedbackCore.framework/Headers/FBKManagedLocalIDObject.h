// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FBKMANAGEDLOCALIDOBJECT_H
#define FBKMANAGEDLOCALIDOBJECT_H

@class NSNumber;


#import "FBKManagedFeedbackObject.h"

@interface FBKManagedLocalIDObject : FBKManagedFeedbackObject

@property (retain) NSNumber *serverID;


+(id)transformJSONArrayIntoLocalIDJSON:(id)arg0 uniquingPrefix:(id)arg1 ;
+(id)transformJSONDictionaryIntoLocalIDJSON:(id)arg0 uniquingPrefix:(id)arg1 ;
+(id)uniquingKey;
-(id)ID;
-(void)setID:(id)arg0 ;
-(void)setPropertiesForLocalIDKeys:(id)arg0 ;


@end


#endif