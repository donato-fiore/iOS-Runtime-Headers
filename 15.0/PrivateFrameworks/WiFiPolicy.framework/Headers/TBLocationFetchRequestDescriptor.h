// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TBLOCATIONFETCHREQUESTDESCRIPTOR_H
#define TBLOCATIONFETCHREQUESTDESCRIPTOR_H

@class NSString, NSPredicate, NSDate, PBCodable, NSSet;
@protocol TBFetchRequestDescriptor, NSCopying;

#import <Foundation/Foundation.h>

#import "TBLocalFetchRequestDescriptor.h"

@interface TBLocationFetchRequestDescriptor : NSObject <TBFetchRequestDescriptor, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat latitude; // ivar: _latitude
@property (retain, nonatomic) TBLocalFetchRequestDescriptor *localFetchDescriptor; // ivar: _localFetchDescriptor
@property (retain, nonatomic) NSPredicate *localFetchPredicate; // ivar: _localFetchPredicate
@property (nonatomic) CGFloat longitude; // ivar: _longitude
@property (retain, nonatomic) NSDate *maxCacheAge; // ivar: _maxCacheAge
@property (retain, nonatomic) TBLocalFetchRequestDescriptor *preferLocalFetchDescriptor; // ivar: _preferLocalFetchDescriptor
@property (nonatomic) NSUInteger primaryTileKey; // ivar: _primaryTileKey
@property (readonly, nonatomic) PBCodable *remoteRequest; // ivar: _remoteRequest
@property (readonly, nonatomic) Class remoteRequestClass;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSSet *tileItems; // ivar: _tileItems
@property (nonatomic) NSUInteger type; // ivar: _type


-(id)_localFetchRequest;
-(id)_preferLocalCacheFetchRequest;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithLatitude:(CGFloat)arg0 longitude:(CGFloat)arg1 ;
-(id)initWithLatitude:(CGFloat)arg0 longitude:(CGFloat)arg1 maxCacheAge:(id)arg2 ;
-(id)initWithLatitude:(CGFloat)arg0 longitude:(CGFloat)arg1 radius:(CGFloat)arg2 maxCacheAge:(id)arg3 ;


@end


#endif