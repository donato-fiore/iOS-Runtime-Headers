// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOREQUESTCOUNTERLOGINFO_H
#define GEOREQUESTCOUNTERLOGINFO_H

@class NSDictionary, NSString, NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface GEORequestCounterLogInfo : NSObject <NSSecureCoding>

 {
    NSDictionary *_dict;
}


@property (readonly, nonatomic) NSString *appID;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSDate *end;
@property (readonly, nonatomic) NSUInteger recvBytes;
@property (readonly, nonatomic) ? requestType;
@property (readonly, nonatomic) NSString *requestTypeString;
@property (readonly, nonatomic) unsigned char result;
@property (readonly, nonatomic) NSString *resultString;
@property (readonly, nonatomic) NSDate *start;
@property (readonly, nonatomic) NSUInteger usedInterfaceTypes;
@property (readonly, nonatomic) NSUInteger xmitBytes;


+(BOOL)supportsSecureCoding;
+(id)counterLogInfoWithDictionary:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)_appendFormattedCSVStringTo:(id)arg0 ;
-(void)_appendFormattedStringTo:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif