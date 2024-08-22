// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TBMUTABLETILEFETCHRESPONSE_H
#define TBMUTABLETILEFETCHRESPONSE_H

@class NSString, NSError, NSMutableSet, NSArray, NSDictionary, NSSet;
@protocol TBFetchResponse;

#import <Foundation/Foundation.h>


@interface TBMutableTileFetchResponse : NSObject <TBFetchResponse>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSError *error; // ivar: error
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableSet *mutableTiles; // ivar: _mutableTiles
@property (readonly, nonatomic) NSArray *results; // ivar: results
@property (readonly, nonatomic) NSDictionary *resultsByBSSID; // ivar: resultsByBSSID
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSSet *tiles;


-(id)init;
-(void)addResponse:(id)arg0 ;


@end


#endif