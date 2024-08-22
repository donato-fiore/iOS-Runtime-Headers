// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NRDEVICEMINISTORE_H
#define NRDEVICEMINISTORE_H

@class NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NRDeviceMiniStore : NSObject <NSSecureCoding>

 {
    NSDictionary *_store;
}




+(BOOL)supportsSecureCoding;
-(id)fullStore;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStore:(id)arg0 ;
-(id)objectForKey:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif