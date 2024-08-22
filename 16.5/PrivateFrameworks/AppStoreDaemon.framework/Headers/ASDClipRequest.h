// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASDCLIPREQUEST_H
#define ASDCLIPREQUEST_H

@class NSDictionary, NSString, NSData, NSURL, NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ASDClipRequest : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSDictionary *dictionary; // ivar: _dictionary
@property (retain, nonatomic) NSString *installSourceBundleID; // ivar: _installSourceBundleID
@property (retain, nonatomic) NSData *placeholderArtwork; // ivar: _placeholderArtwork
@property (nonatomic) BOOL prefetchDecryption; // ivar: _prefetchDecryption
@property (retain, nonatomic) NSString *referrerType; // ivar: _referrerType
@property (retain, nonatomic) NSURL *sourceURL; // ivar: _sourceURL
@property (nonatomic) BOOL thirdPartyWithNoAppReferrer; // ivar: _thirdPartyWithNoAppReferrer
@property (readonly, nonatomic) NSUUID *uniqueID; // ivar: _uniqueID


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif