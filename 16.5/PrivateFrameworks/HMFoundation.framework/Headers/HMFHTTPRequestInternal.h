// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMFHTTPREQUESTINTERNAL_H
#define HMFHTTPREQUESTINTERNAL_H

@class NSURL, NSData, NSDictionary, NSString;


#import "HMFObject.h"
#import "HMFActivity.h"

@interface HMFHTTPRequestInternal : HMFObject

@property (copy, nonatomic) NSURL *URL; // ivar: _URL
@property (readonly, nonatomic) HMFActivity *activity; // ivar: _activity
@property (retain, nonatomic) NSData *body; // ivar: _body
@property (retain, nonatomic) NSDictionary *headerFields; // ivar: _headerFields
@property (copy, nonatomic) NSString *method; // ivar: _method


-(id)init;
-(id)responseWithStatusCode:(NSInteger)arg0 ;
-(void)setHeaderValue:(id)arg0 forHeaderKey:(id)arg1 ;


@end


#endif