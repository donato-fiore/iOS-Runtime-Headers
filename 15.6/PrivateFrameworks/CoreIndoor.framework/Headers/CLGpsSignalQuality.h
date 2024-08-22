// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLGPSSIGNALQUALITY_H
#define CLGPSSIGNALQUALITY_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CLGpsSignalQuality : NSObject <NSSecureCoding>



@property (nonatomic) int quality; // ivar: _quality


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSignalQuality:(int)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif