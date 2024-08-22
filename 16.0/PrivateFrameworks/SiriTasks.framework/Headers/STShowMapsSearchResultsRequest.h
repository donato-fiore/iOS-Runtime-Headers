// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STSHOWMAPSSEARCHRESULTSREQUEST_H
#define STSHOWMAPSSEARCHRESULTSREQUEST_H

@class AFSiriRequest, STSiriLocation, NSString, NSDate;



@interface STShowMapsSearchResultsRequest : AFSiriRequest {
    STSiriLocation *_searchResults;
    NSString *_extSessionGuid;
    NSDate *_extSessionGuidCreatedTimestamp;
}




+(BOOL)supportsSecureCoding;
-(id)_initWithLocation:(id)arg0 extSessionGuid:(id)arg1 extSessionGuidCreatedTimestamp:(id)arg2 ;
-(id)createResponse;
-(id)extSessionGuid;
-(id)extSessionGuidCreatedTimestamp;
-(id)initWithCoder:(id)arg0 ;
-(id)searchResults;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif