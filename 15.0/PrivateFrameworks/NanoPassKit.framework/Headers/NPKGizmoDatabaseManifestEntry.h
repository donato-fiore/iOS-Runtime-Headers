// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NPKGIZMODATABASEMANIFESTENTRY_H
#define NPKGIZMODATABASEMANIFESTENTRY_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface NPKGizmoDatabaseManifestEntry : NSObject

@property (retain, nonatomic) NSArray *localManifestHashes; // ivar: _localManifestHashes
@property (retain, nonatomic) NSArray *remoteManifestHashes; // ivar: _remoteManifestHashes
@property (retain, nonatomic) NSString *uniqueID; // ivar: _uniqueID


-(id)description;


@end


#endif