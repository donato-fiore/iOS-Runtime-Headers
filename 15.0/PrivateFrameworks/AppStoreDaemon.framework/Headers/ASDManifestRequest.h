// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASDMANIFESTREQUEST_H
#define ASDMANIFESTREQUEST_H

@class NSArray, NSDictionary, NSURL, NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ASDManifestRequest : NSObject <NSSecureCoding>



@property NSInteger archiveType; // ivar: _archiveType
@property (retain) NSArray *certificates; // ivar: _certificates
@property (retain) NSDictionary *manifest; // ivar: _manifest
@property (retain) NSURL *manifestURL; // ivar: _manifestURL
@property BOOL pinningRevocationCheckRequired; // ivar: _pinningRevocationCheckRequired
@property (retain) NSUUID *requestIdentifier; // ivar: _requestIdentifier


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif