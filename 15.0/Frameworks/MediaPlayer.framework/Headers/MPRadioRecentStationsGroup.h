// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPRADIORECENTSTATIONSGROUP_H
#define MPRADIORECENTSTATIONSGROUP_H

@class NSString, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MPRadioRecentStationsGroup : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *localizedTitle; // ivar: _localizedTitle
@property (copy, nonatomic) NSArray *stations; // ivar: _stations


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif