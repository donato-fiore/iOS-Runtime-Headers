// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICQQUOTAAPPDETAILSRESPONSE_H
#define ICQQUOTAAPPDETAILSRESPONSE_H

@class AAResponse, NSArray;



@interface ICQQuotaAppDetailsResponse : AAResponse

@property (readonly, nonatomic) NSArray *apps; // ivar: _apps


-(id)description;
-(id)initWithHTTPResponse:(id)arg0 data:(id)arg1 ;
-(void)addApps:(id)arg0 ;


@end


#endif