// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PRIVACYPROXYSERVICESTATUS_H
#define PRIVACYPROXYSERVICESTATUS_H

@class NSDictionary, NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PrivacyProxyServiceStatus : NSObject <NSSecureCoding, NSCopying>



@property (retain) NSDictionary *details; // ivar: _details
@property (retain) NSArray *networkStatuses; // ivar: _networkStatuses
@property NSUInteger serviceStatus; // ivar: _serviceStatus


+(BOOL)supportsSecureCoding;
+(id)serviceStatusString:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(id)serialize;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif