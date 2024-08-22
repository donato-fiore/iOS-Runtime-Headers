// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSTRANSPORTSCORECARD_H
#define IDSTRANSPORTSCORECARD_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface IDSTransportScoreCard : NSObject <NSCopying>

 {
    NSUInteger score;
    NSInteger stunTransport;
    NSInteger transportInterface;
    unsigned int interfaceIndex;
    BOOL alreadySelected;
    BOOL isIPv6;
}




-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif