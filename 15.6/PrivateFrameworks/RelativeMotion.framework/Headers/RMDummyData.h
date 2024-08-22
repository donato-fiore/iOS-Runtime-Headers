// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RMDUMMYDATA_H
#define RMDUMMYDATA_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface RMDummyData : NSObject <NSSecureCoding>



@property (readonly, nonatomic) ? payload; // ivar: _payload


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPayload:(struct ? )arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif