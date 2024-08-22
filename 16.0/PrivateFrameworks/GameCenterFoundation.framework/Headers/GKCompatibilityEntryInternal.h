// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKCOMPATIBILITYENTRYINTERNAL_H
#define GKCOMPATIBILITYENTRYINTERNAL_H

@class NSNumber, NSString, NSSet;


#import "GKInternalRepresentation.h"

@interface GKCompatibilityEntryInternal : GKInternalRepresentation

@property (retain, nonatomic) NSNumber *adamID; // ivar: _adamID
@property (retain, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (nonatomic) NSInteger platform; // ivar: _platform
@property (retain, nonatomic) NSSet *shortVersions; // ivar: _shortVersions
@property (retain, nonatomic) NSSet *versions; // ivar: _versions


+(id)secureCodedPropertyKeys;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;


@end


#endif