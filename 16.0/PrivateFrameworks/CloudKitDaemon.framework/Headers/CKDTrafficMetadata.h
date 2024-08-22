// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDTRAFFICMETADATA_H
#define CKDTRAFFICMETADATA_H

@class NSDictionary, NSString, NSDate, NSURL;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CKDTrafficMetadata : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSDictionary *headers; // ivar: _headers
@property (retain, nonatomic) NSString *method; // ivar: _method
@property (nonatomic) BOOL parsingStandaloneMessage; // ivar: _parsingStandaloneMessage
@property (retain, nonatomic) NSString *requestClassName; // ivar: _requestClassName
@property (nonatomic) NSInteger status; // ivar: _status
@property (retain, nonatomic) NSDate *timestamp; // ivar: _timestamp
@property (retain, nonatomic) NSURL *url; // ivar: _url


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif