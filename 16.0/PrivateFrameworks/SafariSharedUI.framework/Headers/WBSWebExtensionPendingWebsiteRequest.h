// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSWEBEXTENSIONPENDINGWEBSITEREQUEST_H
#define WBSWEBEXTENSIONPENDINGWEBSITEREQUEST_H

@class NSString, NSDate, NSSet;

#import <Foundation/Foundation.h>


@interface WBSWebExtensionPendingWebsiteRequest : NSObject

@property (copy, nonatomic) NSString *apiName; // ivar: _apiName
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (copy, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (copy, nonatomic) NSSet *urls; // ivar: _urls




@end


#endif