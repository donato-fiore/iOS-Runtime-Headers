// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WIFI3BARSRESPONSE_H
#define WIFI3BARSRESPONSE_H

@class NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WiFi3BarsResponse : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSDictionary *results; // ivar: _results


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif