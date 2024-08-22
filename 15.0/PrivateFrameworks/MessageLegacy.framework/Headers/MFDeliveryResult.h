// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFDELIVERYRESULT_H
#define MFDELIVERYRESULT_H


#import <Foundation/Foundation.h>


@interface MFDeliveryResult : NSObject

@property (nonatomic) NSInteger attributes; // ivar: _attributes
@property (nonatomic) NSUInteger bytesSent; // ivar: _bytesSent
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (nonatomic) BOOL isWifi; // ivar: _isWifi
@property (nonatomic) NSInteger status; // ivar: _status


-(id)description;
-(id)initWithStatus:(NSInteger)arg0 ;


@end


#endif