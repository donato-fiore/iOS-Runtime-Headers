// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CWFBSS_H
#define CWFBSS_H

@class NSString, NSDictionary, NSDate, CLLocation;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CWFChannel.h"

@interface CWFBSS : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSString *BSSID; // ivar: _BSSID
@property (copy, nonatomic) NSDictionary *OSSpecificAttributes; // ivar: _OSSpecificAttributes
@property (copy, nonatomic) CWFChannel *channel; // ivar: _channel
@property (copy, nonatomic) NSDate *lastAssociatedAt; // ivar: _lastAssociatedAt
@property (copy, nonatomic) CLLocation *location; // ivar: _location


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToBSS:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)externalForm;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithExternalForm:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif