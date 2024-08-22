// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SASYNCCHUNKDENIED_H
#define SASYNCCHUNKDENIED_H

@class NSString, NSArray;
@protocol SAClientBoundCommand;


#import "SABaseClientBoundCommand.h"
#import "SASyncAnchor.h"

@interface SASyncChunkDenied : SABaseClientBoundCommand <SAClientBoundCommand>



@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSArray *callbacks;
@property (retain, nonatomic) SASyncAnchor *current;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger errorCode;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *refId;
@property (readonly) Class superclass;


+(id)chunkDenied;
+(id)chunkDeniedWithDictionary:(id)arg0 context:(id)arg1 ;
+(id)chunkDeniedWithErrorCode:(NSInteger)arg0 ;
-(BOOL)mutatingCommand;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;
-(id)initWithErrorCode:(NSInteger)arg0 ;


@end


#endif