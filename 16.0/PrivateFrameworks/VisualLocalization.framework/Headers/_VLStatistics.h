// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _VLSTATISTICS_H
#define _VLSTATISTICS_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _VLStatistics : NSObject <NSSecureCoding>

 {
    ? _stats;
}


@property (readonly, nonatomic) *? stats;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStats:(struct ? *)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif