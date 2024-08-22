// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TBTILEFETCHREQUESTDESCRIPTOR_H
#define TBTILEFETCHREQUESTDESCRIPTOR_H

@class NSString, NSPredicate, NSDate, PBCodable, NSSet;
@protocol TBFetchRequestDescriptor, NSCopying;

#import <Foundation/Foundation.h>

#import "TBLocalFetchRequestDescriptor.h"

@interface TBTileFetchRequestDescriptor : NSObject <TBFetchRequestDescriptor, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) TBLocalFetchRequestDescriptor *localFetchDescriptor; // ivar: _localFetchDescriptor
@property (retain, nonatomic) NSPredicate *localFetchPredicate; // ivar: _localFetchPredicate
@property (retain, nonatomic) NSDate *maxCacheAge; // ivar: _maxCacheAge
@property (retain, nonatomic) TBLocalFetchRequestDescriptor *preferLocalFetchDescriptor; // ivar: _preferLocalFetchDescriptor
@property (readonly, nonatomic) PBCodable *remoteRequest;
@property (readonly, nonatomic) Class remoteRequestClass;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSSet *tileItems; // ivar: _tileItems
@property (nonatomic) NSUInteger type; // ivar: _type


-(id)_preferLocalCacheFetchRequest;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithTileItems:(id)arg0 ;
-(id)initWithTileItems:(id)arg0 maxCacheAge:(id)arg1 ;


@end


#endif