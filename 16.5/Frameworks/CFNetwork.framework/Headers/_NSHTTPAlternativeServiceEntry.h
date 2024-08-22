// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _NSHTTPALTERNATIVESERVICEENTRY_H
#define _NSHTTPALTERNATIVESERVICEENTRY_H

@class NSString, NSDate;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _NSHTTPAlternativeServiceEntry : NSObject <NSCopying>



@property (retain, nonatomic) NSString *alternateHost; // ivar: _alternateHost
@property (nonatomic) NSInteger alternatePort; // ivar: _alternatePort
@property (retain, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (retain, nonatomic) NSString *host; // ivar: _host
@property (retain, nonatomic) NSString *partition; // ivar: _partition
@property (nonatomic) NSInteger port; // ivar: _port
@property (nonatomic) NSInteger serviceType; // ivar: _serviceType


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif