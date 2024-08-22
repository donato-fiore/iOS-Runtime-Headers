// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TBLOCALFETCHRESPONSE_H
#define TBLOCALFETCHRESPONSE_H

@class NSString, NSError, NSArray, NSDictionary, NSSet;
@protocol TBFetchResponse;

#import <Foundation/Foundation.h>


@interface TBLocalFetchResponse : NSObject <TBFetchResponse>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSError *error; // ivar: error
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *results; // ivar: _results
@property (retain, nonatomic) NSDictionary *resultsByBSSID; // ivar: _resultsByBSSID
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSSet *tiles; // ivar: _tiles


+(id)responseWithResults:(id)arg0 entityDescription:(id)arg1 ;
+(id)responseWithResultsByBSSID:(id)arg0 ;
-(id)initWithResults:(id)arg0 entityDescription:(id)arg1 ;
-(id)initWithResultsByBSSID:(id)arg0 ;


@end


#endif