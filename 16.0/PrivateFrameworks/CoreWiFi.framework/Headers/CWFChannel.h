// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CWFCHANNEL_H
#define CWFCHANNEL_H

@class NSString;
@protocol CWFJSONEncodable, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CWFChannel : NSObject <CWFJSONEncodable, NSCopying, NSSecureCoding>



@property (readonly, nonatomic) int band;
@property (nonatomic) NSUInteger channel; // ivar: _channel
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned int flags; // ivar: _flags
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL is2GHz;
@property (readonly, nonatomic) BOOL is5GHz;
@property (readonly, nonatomic) BOOL isDFS;
@property (readonly) Class superclass;
@property (readonly, nonatomic) int width;


+(BOOL)supportsSecureCoding;
+(id)channelWithNumber:(NSUInteger)arg0 band:(int)arg1 width:(int)arg2 ;
-(BOOL)extAbove;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToChannel:(id)arg0 ;
-(id)JSONCompatibleKeyValueMap;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif