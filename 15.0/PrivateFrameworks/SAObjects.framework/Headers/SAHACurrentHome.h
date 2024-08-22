// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAHACURRENTHOME_H
#define SAHACURRENTHOME_H

@class NSString;
@protocol SABackgroundContextObject;


#import "AceObject.h"

@interface SAHACurrentHome : AceObject <SABackgroundContextObject>



@property (copy, nonatomic) NSString *currentHomeIdentifier;
@property (copy, nonatomic) NSString *currentHomeName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)currentHome;
+(id)currentHomeWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif