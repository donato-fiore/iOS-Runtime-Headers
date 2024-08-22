// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NFCTAGCOMMANDCONFIGURATION_H
#define NFCTAGCOMMANDCONFIGURATION_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface NFCTagCommandConfiguration : NSObject <NSCopying>



@property (nonatomic) NSUInteger maximumRetries; // ivar: _maximumRetries
@property (nonatomic) CGFloat retryInterval; // ivar: _retryInterval


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif