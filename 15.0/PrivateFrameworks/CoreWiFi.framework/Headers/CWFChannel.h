// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CWFCHANNEL_H
#define CWFCHANNEL_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CWFChannel : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) int band;
@property (nonatomic) NSUInteger channel; // ivar: _channel
@property (nonatomic) int flags; // ivar: _flags
@property (readonly, nonatomic) BOOL is2GHz;
@property (readonly, nonatomic) BOOL is5GHz;
@property (readonly, nonatomic) BOOL isDFS;
@property (readonly, nonatomic) int width;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToChannel:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif