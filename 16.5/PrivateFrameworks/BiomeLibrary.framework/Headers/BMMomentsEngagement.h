// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMMOMENTSENGAGEMENT_H
#define BMMOMENTSENGAGEMENT_H

@class BMEventBase, NSString;
@protocol BMStoreData;


#import "BMMomentsEngagementClientActivityEvent.h"
#import "BMMomentsEngagementAppEntryEvent.h"
#import "BMMomentsEngagementSuggestionEvent.h"

@interface BMMomentsEngagement : BMEventBase <BMStoreData>



@property (readonly, nonatomic) BMMomentsEngagementClientActivityEvent *clientActivityEvent; // ivar: _clientActivityEvent
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BMMomentsEngagementAppEntryEvent *entryEvent; // ivar: _entryEvent
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BMMomentsEngagementSuggestionEvent *suggestionEvent; // ivar: _suggestionEvent
@property (readonly) Class superclass;


+(id)columns;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)validKeyPaths;
-(BOOL)isEqual:(id)arg0 ;
-(id)initByReadFrom:(id)arg0 ;
-(id)initWithJSONDictionary:(id)arg0 error:(*id)arg1 ;
-(id)initWithSuggestionEvent:(id)arg0 entryEvent:(id)arg1 clientActivityEvent:(id)arg2 ;
-(id)jsonDictionary;
-(id)serialize;
-(void)writeTo:(id)arg0 ;


@end


#endif