// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASASSETQUERY_H
#define ASASSETQUERY_H

@class NSString, NSPredicate, NSArray;

#import <Foundation/Foundation.h>


@interface ASAssetQuery : NSObject

@property (copy, nonatomic) NSString *assetType; // ivar: _assetType
@property (nonatomic) CGFloat networkTimeout; // ivar: _networkTimeout
@property (retain, nonatomic) NSPredicate *predicate; // ivar: _predicate
@property (nonatomic) BOOL queriesLocalAssetInformationOnly; // ivar: _queriesLocalAssetInformationOnly
@property (retain, nonatomic) NSArray *results; // ivar: _results
@property (copy, nonatomic) NSString *sessionIdentifier; // ivar: _sessionIdentifier


+(id)queryPredicateForProperties:(id)arg0 ;
-(id)initWithAssetType:(id)arg0 ;
-(id)initWithAssetType:(id)arg0 sessionIdentifier:(id)arg1 ;
-(id)runQueryAndReturnError:(*id)arg0 ;
-(id)runQueryForInfoReturnError:(*id)arg0 ;
-(void)dealloc;
-(void)startQuery:(id)arg0 ;
-(void)stopQuery;


@end


#endif