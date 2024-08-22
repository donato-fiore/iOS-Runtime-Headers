// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TBTILEFETCHREQUEST_H
#define TBTILEFETCHREQUEST_H

@class NSString, NSDictionary;
@protocol TBFetchRequest, NSCopying;

#import <Foundation/Foundation.h>

#import "TBTileFetchRequestDescriptor.h"

@interface TBTileFetchRequest : NSObject <TBFetchRequest, NSCopying>



@property (nonatomic) BOOL cacheable; // ivar: _cacheable
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) TBTileFetchRequestDescriptor *descriptor; // ivar: _descriptor
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *preferLocalHandler; // ivar: preferLocalHandler
@property (copy, nonatomic) id *resultsHandler; // ivar: resultsHandler
@property (nonatomic) NSUInteger sourcePolicy; // ivar: _sourcePolicy
@property (readonly) Class superclass;
@property (retain, nonatomic) NSDictionary *userInfo; // ivar: userInfo


+(id)fetchRequestWithDescriptor:(id)arg0 sourcePolicy:(NSUInteger)arg1 cacheable:(BOOL)arg2 ;
-(BOOL)doesLocalResultsSatisfyRequest:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithDescriptor:(id)arg0 sourcePolicy:(NSUInteger)arg1 cacheable:(BOOL)arg2 ;
-(void)handlePreferLocalResponse:(id)arg0 ;
-(void)handleResponse:(id)arg0 ;


@end


#endif