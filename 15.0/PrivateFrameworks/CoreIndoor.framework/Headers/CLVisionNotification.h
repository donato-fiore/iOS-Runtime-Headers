// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLVISIONNOTIFICATION_H
#define CLVISIONNOTIFICATION_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CLVisionNotification : NSObject <NSSecureCoding>



@property (nonatomic) NSUInteger arSessionState; // ivar: _arSessionState


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithARSessionState:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif