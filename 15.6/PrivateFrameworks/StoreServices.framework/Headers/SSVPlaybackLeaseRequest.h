// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSVPLAYBACKLEASEREQUEST_H
#define SSVPLAYBACKLEASEREQUEST_H

@class NSURL, NSDictionary, NSString, NSData;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SSVPlaybackLeaseRequest : NSObject <NSCopying>

 {
    NSURL *_certificateURL;
}


@property (copy, nonatomic) NSDictionary *HTTPHeaderFields; // ivar: _httpHeaderFields
@property (nonatomic) NSUInteger KDChannelIdentifier; // ivar: _kdChannelIdentifier
@property (nonatomic, getter=_KDMovieIdentifier, setter=_setKDMovieIdentifier:) NSUInteger _KDMovieIdentifier; // ivar: _kdMovieIdentifier
@property (copy, nonatomic, getter=_URL, setter=_setURL:) NSURL *_URL; // ivar: _url
@property (readonly, copy, nonatomic, getter=_URLBagKey) NSString *_URLBagKey;
@property (readonly, copy, nonatomic, getter=_actionParameterValue) NSString *_actionParameterValue;
@property (nonatomic, getter=_actionType, setter=_setActionType:) NSInteger _actionType; // ivar: _actionType
@property (copy, nonatomic, getter=_certificateData, setter=_setCertificateData:) NSData *_certificateData; // ivar: _certificateData
@property (readonly, nonatomic, getter=_leaseType) NSInteger _leaseType; // ivar: _leaseType
@property (copy, nonatomic) NSDictionary *parameterValues; // ivar: _parameters
@property (nonatomic) BOOL startsLeaseSession; // ivar: _startsLeaseSession


+(id)_requestWithType:(NSInteger)arg0 ;
-(id)_copyBodyDictionaryWithFairPlaySession:(**void)arg0 ;
-(id)_copyWithLeaseType:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)valueForHTTPHeaderField:(id)arg0 ;
-(id)valueForParameter:(id)arg0 ;
-(void)_applyValuesToCopy:(id)arg0 ;
-(void)setValue:(id)arg0 forHTTPHeaderField:(id)arg1 ;
-(void)setValue:(id)arg0 forParameter:(id)arg1 ;


@end


#endif