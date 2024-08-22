// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SASYNCCHUNK_H
#define SASYNCCHUNK_H

@class NSString, NSArray;
@protocol SAServerBoundCommand;


#import "SABaseClientBoundCommand.h"
#import "SASyncAppMetaData.h"

@interface SASyncChunk : SABaseClientBoundCommand <SAServerBoundCommand>



@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *appBundleId;
@property (retain, nonatomic) SASyncAppMetaData *appMetaData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *intentSlotName;
@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *postGen;
@property (copy, nonatomic) NSString *preGen;
@property (copy, nonatomic) NSString *refId;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *toAdd;
@property (copy, nonatomic) NSArray *toRemove;
@property (copy, nonatomic) NSString *validity;


+(id)chunk;
+(id)chunkWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)mutatingCommand;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif