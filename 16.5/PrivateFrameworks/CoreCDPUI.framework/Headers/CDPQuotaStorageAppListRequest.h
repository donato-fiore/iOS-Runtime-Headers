// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDPQUOTASTORAGEAPPLISTREQUEST_H
#define CDPQUOTASTORAGEAPPLISTREQUEST_H

@class AARequest, NSString, ACAccount;



@interface CDPQuotaStorageAppListRequest : AARequest {
    NSString *_urlStringFormat;
}


@property (readonly, nonatomic) ACAccount *account; // ivar: _account


-(BOOL)isUrlAvailable;
-(id)_acceptedLanguageString;
-(id)_urlStringFormatFromBag;
-(id)initWithAccount:(id)arg0 ;
-(id)urlRequest;
-(id)urlString;


@end


#endif