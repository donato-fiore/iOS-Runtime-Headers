// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CWFRNRBSS_H
#define CWFRNRBSS_H

@class NSString;
@protocol CWFJSONEncodable, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CWFChannel.h"

@interface CWFRNRBSS : NSObject <CWFJSONEncodable, NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSString *BSSID; // ivar: _BSSID
@property (nonatomic) NSUInteger TBTTOffset; // ivar: _TBTTOffset
@property (nonatomic, getter=isUPRActive) BOOL UPRActive; // ivar: _UPRActive
@property (copy, nonatomic) CWFChannel *channel; // ivar: _channel
@property (nonatomic, getter=isColocatedAP) BOOL colocatedAP; // ivar: _colocatedAP
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isMultiband6GHz) BOOL multiband6GHz; // ivar: _multiband6GHz
@property (nonatomic, getter=isMultipleBSSID) BOOL multipleBSSID; // ivar: _multipleBSSID
@property (nonatomic) NSUInteger primary20MHzPSD; // ivar: _primary20MHzPSD
@property (nonatomic, getter=isSameSSID) BOOL sameSSID; // ivar: _sameSSID
@property (nonatomic) NSUInteger shortSSID; // ivar: _shortSSID
@property (readonly) Class superclass;
@property (nonatomic, getter=isTransmittedBSSID) BOOL transmittedBSSID; // ivar: _transmittedBSSID


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToRNRBSS:(id)arg0 ;
-(id)JSONCompatibleKeyValueMap;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif