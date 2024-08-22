// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFKEYCHAINDATAFETCHRESULT_H
#define SFKEYCHAINDATAFETCHRESULT_H

@class SFKeychainFetchResult;


#import "SFKeychainData.h"

@interface SFKeychainDataFetchResult : SFKeychainFetchResult {
    id *_dataFetchResult;
}


@property (readonly) SFKeychainData *value;


-(void)fetchValueWithAuthenticationContext:(id)arg0 resultHandler:(id)arg1 ;


@end


#endif