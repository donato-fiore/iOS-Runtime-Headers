// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SASYNCGETANCHORS_H
#define SASYNCGETANCHORS_H

@class NSString, NSArray, NSDictionary;
@protocol SAServerBoundCommand;


#import "SABaseClientBoundCommand.h"

@interface SASyncGetAnchors : SABaseClientBoundCommand <SAServerBoundCommand>



@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSArray *appMetaDataList;
@property (copy, nonatomic) NSString *authToken;
@property (nonatomic) BOOL companionOfMUDevice;
@property (copy, nonatomic) NSDictionary *customVocabSources;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL includeAllKnownAnchors;
@property (copy, nonatomic) NSString *primeToken;
@property (copy, nonatomic) NSString *refId;
@property (copy, nonatomic) NSArray *sources;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *syncReason;
@property (copy, nonatomic) NSArray *watchAppMetaDataList;


+(id)getAnchors;
+(id)getAnchorsWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)mutatingCommand;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif