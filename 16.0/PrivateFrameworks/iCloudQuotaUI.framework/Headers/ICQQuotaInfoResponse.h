// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICQQUOTAINFORESPONSE_H
#define ICQQUOTAINFORESPONSE_H

@class AAResponse, NSDictionary, NSArray, NSString, PSQuotaInfo;



@interface ICQQuotaInfoResponse : AAResponse {
    BOOL _basicAccount;
    NSDictionary *_quotaInfoDict;
    NSDictionary *_storageInfo;
    NSDictionary *_urls;
    NSArray *_topToolbarItems;
    NSArray *_otherToolbarItems;
}


@property (readonly, nonatomic) NSDictionary *accountStatus; // ivar: _accountStatus
@property (readonly, nonatomic) NSString *appDetailsURLString;
@property (readonly, nonatomic) NSString *availableStorageText;
@property (readonly, nonatomic, getter=isDetailed) BOOL detailed; // ivar: _detailed
@property (readonly, nonatomic) NSString *manageStorageURLString;
@property (readonly, retain, nonatomic) PSQuotaInfo *quotaInfo; // ivar: _quotaInfo
@property (readonly, nonatomic) NSString *totalStorageText;


-(BOOL)hasPurchasedMoreStorage;
-(NSUInteger)availableStorage;
-(NSUInteger)totalStorage;
-(NSUInteger)usedStorage;
-(id)_sizeStringFromBytes:(id)arg0 ;
-(id)initWithHTTPResponse:(id)arg0 data:(id)arg1 ;
-(id)storageFooter:(BOOL)arg0 ;


@end


#endif