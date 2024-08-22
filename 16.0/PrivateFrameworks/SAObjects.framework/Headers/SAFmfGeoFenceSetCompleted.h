// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAFMFGEOFENCESETCOMPLETED_H
#define SAFMFGEOFENCESETCOMPLETED_H

@class NSString, NSURL;
@protocol SAServerBoundCommand;


#import "SADomainCommand.h"
#import "SAFmfGeoFence.h"

@interface SAFmfGeoFenceSetCompleted : SADomainCommand <SAServerBoundCommand>



@property (copy, nonatomic) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) SAFmfGeoFence *geoFence;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *refId;
@property (copy, nonatomic) NSURL *searchContext;
@property (readonly) Class superclass;


+(id)geoFenceSetCompletedWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif