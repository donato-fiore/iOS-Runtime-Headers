// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRKASMCREDENTIALMANIFEST_H
#define CRKASMCREDENTIALMANIFEST_H

@class NSMutableDictionary, NSSet;

#import <Foundation/Foundation.h>

#import "CRKAnnotatedCredentialManifest.h"

@interface CRKASMCredentialManifest : NSObject

@property (readonly, nonatomic) CRKAnnotatedCredentialManifest *annotatedManifest; // ivar: _annotatedManifest
@property (readonly, nonatomic) NSMutableDictionary *entriesByPersistentID; // ivar: _entriesByPersistentID
@property (readonly, copy, nonatomic) NSSet *persistentIDs;


-(id)entryForPersistentID:(id)arg0 ;
-(id)initWithAnnotatedManifest:(id)arg0 ;
-(id)makeEntryForPersistentID:(id)arg0 ;


@end


#endif