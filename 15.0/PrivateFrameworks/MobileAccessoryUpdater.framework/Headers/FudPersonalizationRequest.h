// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FUDPERSONALIZATIONREQUEST_H
#define FUDPERSONALIZATIONREQUEST_H

@class NSData, NSArray, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface FudPersonalizationRequest : NSObject <NSSecureCoding>

 {
    BOOL _cproSet;
    BOOL _csecSet;
    BOOL _cepoSet;
    BOOL _useSSOCredentials;
}


@property (nonatomic) unsigned int boardID; // ivar: _boardID
@property (nonatomic) unsigned int chipEpoch; // ivar: _chipEpoch
@property (nonatomic) unsigned int chipID; // ivar: _chipID
@property (nonatomic) NSUInteger ecID; // ivar: _ecID
@property (nonatomic) BOOL enableMixMatch; // ivar: _enableMixMatch
@property (retain, nonatomic) NSData *extEcID; // ivar: _extEcID
@property (nonatomic) BOOL globalSigning; // ivar: _globalSigning
@property (retain, nonatomic) NSData *nonceHash; // ivar: _nonceHash
@property (retain, nonatomic) NSArray *objectList; // ivar: _objectList
@property (retain, nonatomic) NSData *payload; // ivar: _payload
@property (nonatomic) BOOL productionMode; // ivar: _productionMode
@property (readonly, copy, nonatomic) NSString *requestName; // ivar: _requestName
@property (retain, nonatomic) NSString *requestPrefix; // ivar: _requestPrefix
@property (nonatomic) unsigned short responseAlignment; // ivar: _responseAlignment
@property (nonatomic) int responseFormat; // ivar: _responseFormat
@property (nonatomic) unsigned int securityDomain; // ivar: _securityDomain
@property (nonatomic) BOOL securityMode; // ivar: _securityMode


+(BOOL)supportsSecureCoding;
-(BOOL)isChipEpochSet;
-(BOOL)isProductionModeSet;
-(BOOL)isSecurityModeSet;
-(BOOL)useSSOCredentials;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setUseSSOCredentials:(BOOL)arg0 ;


@end


#endif