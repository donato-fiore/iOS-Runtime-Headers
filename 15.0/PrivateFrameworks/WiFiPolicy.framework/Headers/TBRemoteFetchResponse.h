// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TBREMOTEFETCHRESPONSE_H
#define TBREMOTEFETCHRESPONSE_H

@class NSString, NSError, NSArray, NSDictionary, NSSet;
@protocol TBFetchResponse;

#import <Foundation/Foundation.h>


@interface TBRemoteFetchResponse : NSObject <TBFetchResponse>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSError *error; // ivar: _error
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *results; // ivar: _results
@property (readonly, nonatomic) NSDictionary *resultsByBSSID;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSSet *tiles; // ivar: _tiles


+(id)responseWithResults:(id)arg0 tiles:(id)arg1 error:(id)arg2 ;
-(id)initWithResults:(id)arg0 tiles:(id)arg1 error:(id)arg2 ;


@end


#endif