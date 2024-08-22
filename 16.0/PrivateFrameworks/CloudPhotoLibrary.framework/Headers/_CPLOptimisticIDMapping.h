// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CPLOPTIMISTICIDMAPPING_H
#define _CPLOPTIMISTICIDMAPPING_H

@class NSString;
@protocol CPLEngineIDMapping;

#import <Foundation/Foundation.h>


@interface _CPLOptimisticIDMapping : NSObject <CPLEngineIDMapping>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<CPLEngineIDMapping> *idMapping; // ivar: _idMapping
@property (readonly) Class superclass;


-(BOOL)addCloudScopedIdentifier:(id)arg0 forLocalScopedIdentifier:(id)arg1 isFinal:(BOOL)arg2 direction:(NSUInteger)arg3 error:(*id)arg4 ;
-(id)cloudScopedIdentifierForLocalScopedIdentifier:(id)arg0 isFinal:(*BOOL)arg1 ;
-(id)firstAvailableCloudScopedIdentifierForProposedCloudScopedIdentifier:(id)arg0 ;
-(id)initWithIDMapping:(id)arg0 ;
-(id)localScopedIdentifierForCloudScopedIdentifier:(id)arg0 isFinal:(*BOOL)arg1 ;
-(id)localScopedIdentifierForCloudScopedIdentifierIncludeRemappedRecords:(id)arg0 ;
-(id)setupCloudScopedIdentifier:(id)arg0 forLocalScopedIdentifier:(id)arg1 isFinal:(BOOL)arg2 direction:(NSUInteger)arg3 error:(*id)arg4 ;


@end


#endif