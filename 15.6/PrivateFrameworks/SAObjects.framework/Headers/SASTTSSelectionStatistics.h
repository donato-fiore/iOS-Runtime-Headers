// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SASTTSSELECTIONSTATISTICS_H
#define SASTTSSELECTIONSTATISTICS_H

@class NSString, NSArray;
@protocol SAServerBoundCommand;


#import "SABaseCommand.h"

@interface SASTTSSelectionStatistics : SABaseCommand <SAServerBoundCommand>



@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *completionType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *interactionId;
@property (copy, nonatomic) NSArray *listenedItems;
@property (copy, nonatomic) NSString *refId;
@property (nonatomic) NSInteger selectedItemIndex;
@property (copy, nonatomic) NSString *sessionId;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *timesListened;


+(id)tTSSelectionStatistics;
+(id)tTSSelectionStatisticsWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif