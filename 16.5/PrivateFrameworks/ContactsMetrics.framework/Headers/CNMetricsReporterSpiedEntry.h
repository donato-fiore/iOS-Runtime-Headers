// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNMETRICSREPORTERSPIEDENTRY_H
#define CNMETRICSREPORTERSPIEDENTRY_H

@class NSMutableDictionary, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CNMetricsReporterSpiedEntry : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy) NSMutableDictionary *dictionary; // ivar: _dictionary
@property (readonly, copy) NSString *event; // ivar: _event
@property (readonly, getter=isLogged) BOOL logged; // ivar: _logged


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 event:(id)arg1 logged:(BOOL)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif