// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NKASSETDOWNLOAD_H
#define NKASSETDOWNLOAD_H

@class NSURLRequest, NSURLConnection, NSString, NSDictionary, NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "NKIssue.h"

@interface NKAssetDownload : NSObject <NSSecureCoding>

 {
    BOOL _isDecodingValid;
}


@property (copy) NSURLRequest *URLRequest; // ivar: _request
@property BOOL attemptedConnection; // ivar: _attemptedConnection
@property (retain) NSURLConnection *connection; // ivar: _connection
@property (copy) NSString *identifier; // ivar: _identifier
@property (readonly, weak) NKIssue *issue; // ivar: _issue
@property (copy) NSDictionary *userInfo;
@property (retain) NSData *userInfoData; // ivar: _userInfoData


+(BOOL)supportsSecureCoding;
-(BOOL)_isDecodingValid;
-(id)_initWithURLRequest:(id)arg0 issue:(id)arg1 ;
-(id)description;
-(id)downloadWithDelegate:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)_cancel;
-(void)_connectionBackgroundDownloadPostCompleted:(id)arg0 ;
-(void)_connectionBackgroundDownloadPreCompleted:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif