// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFPRESENCEEVENTBUILDER_H
#define HFPRESENCEEVENTBUILDER_H

@class NSString;
@protocol HFLocationEventBuilder;


#import "HFEventBuilder.h"
#import "HFSelectedUserCollection.h"

@interface HFPresenceEventBuilder : HFEventBuilder <HFLocationEventBuilder>



@property (nonatomic) NSUInteger activationGranularity; // ivar: _activationGranularity
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger locationEventType; // ivar: _locationEventType
@property (readonly, nonatomic) NSUInteger presenceEventType;
@property (readonly, nonatomic) NSUInteger presenceUserType;
@property (readonly) Class superclass;
@property (retain, nonatomic) HFSelectedUserCollection *users; // ivar: _users


+(id)_selectedUsersForPresenceEvent:(id)arg0 ;
-(id)buildNewEventsFromCurrentState;
-(id)compareToObject:(id)arg0 ;
-(id)comparisonKey;
-(id)eventType;
-(id)initWithEvent:(id)arg0 ;
-(id)naturalLanguageNameWithOptions:(id)arg0 ;


@end


#endif