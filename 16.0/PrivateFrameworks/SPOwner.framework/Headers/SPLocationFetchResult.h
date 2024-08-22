// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SPLOCATIONFETCHRESULT_H
#define SPLOCATIONFETCHRESULT_H

@class NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SPLocationFetchResult : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSDictionary *locationsByBeaconIdentifier; // ivar: _locationsByBeaconIdentifier


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithResults:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif