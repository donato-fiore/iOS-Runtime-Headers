// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSERVEROBJECTDATABASEIMPORTRESULT_H
#define MPSERVEROBJECTDATABASEIMPORTRESULT_H

@class NSError, NSArray;
@protocol MPServerObjectDatabasePlaybackAuthorizationTokenTrustProvider;

#import <Foundation/Foundation.h>


@interface MPServerObjectDatabaseImportResult : NSObject

@property (readonly, nonatomic) id *annotatedPayload; // ivar: _annotatedPayload
@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) NSArray *playableAssetIdentifiers; // ivar: _playableAssetIdentifiers
@property (readonly, copy, nonatomic) NSObject<MPServerObjectDatabasePlaybackAuthorizationTokenTrustProvider> *trustProvider; // ivar: _trustProvider


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAnnotatedPayload:(*id)arg0 playableAssetIdentifiers:(id)arg1 trustProvider:(id)arg2 error:(id)arg3 ;


@end


#endif