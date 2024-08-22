// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DKCLOUDUPLOADRESULT_H
#define DKCLOUDUPLOADRESULT_H

@class NSError, NSNumber, NSString;

#import <Foundation/Foundation.h>


@interface DKCloudUploadResult : NSObject

@property (retain, nonatomic) NSError *error; // ivar: _error
@property (retain, nonatomic, getter=isPrimaryAccount) NSNumber *primaryAccount; // ivar: _primaryAccount
@property (nonatomic) BOOL success; // ivar: _success
@property (retain, nonatomic) NSString *username; // ivar: _username


+(id)resultWithAccount:(id)arg0 success:(BOOL)arg1 error:(id)arg2 ;
+(id)resultWithSuccess:(BOOL)arg0 error:(id)arg1 ;
-(id)description;


@end


#endif