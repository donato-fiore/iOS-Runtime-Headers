// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRINCOMINGPOSTERCONFIGURATION_H
#define PRINCOMINGPOSTERCONFIGURATION_H

@class NSURL, NSString, PRSPosterPath, PRSServerPosterIdentity;
@protocol PRPosterContents;

#import <Foundation/Foundation.h>

#import "PRPosterConfiguredProperties.h"

@interface PRIncomingPosterConfiguration : NSObject <PRPosterContents>



@property (readonly, copy, nonatomic) NSURL *assetDirectory;
@property (readonly, nonatomic) PRPosterConfiguredProperties *configuredProperties; // ivar: _configuredProperties
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *descriptorIdentifier;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PRSPosterPath *path; // ivar: _path
@property (readonly, nonatomic) PRSServerPosterIdentity *sourceIdentity; // ivar: _sourceIdentity
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithPath:(id)arg0 sourceIdentity:(id)arg1 configuredProperties:(id)arg2 ;
-(id)loadUserInfoWithError:(*id)arg0 ;
-(id)objectForUserInfoKey:(id)arg0 ;


@end


#endif