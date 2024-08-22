// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ENDOWNLOADENDPOINTSTATE_H
#define ENDOWNLOADENDPOINTSTATE_H

@class NSUUID, NSString, NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "ENDownloadEndpoint.h"

@interface ENDownloadEndpointState : NSObject <NSSecureCoding>



@property (retain, nonatomic) ENDownloadEndpoint *endpoint; // ivar: _endpoint
@property (readonly, copy, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (copy, nonatomic) NSString *lastDownloadedFilePath; // ivar: _lastDownloadedFilePath
@property (copy, nonatomic) NSDate *lastFetchAttemptDate; // ivar: _lastFetchAttemptDate
@property (copy, nonatomic) NSDate *lastSuccessfulFetchDate; // ivar: _lastSuccessfulFetchDate
@property (readonly, copy, nonatomic) NSString *shortIdentifier; // ivar: _shortIdentifier


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEndpoint:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif