// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IDSTRANSPORTSCORECARD_H
#define IDSTRANSPORTSCORECARD_H


#import <Foundation/Foundation.h>


@interface IDSTransportScoreCard : NSObject {
    NSUInteger score;
    NSInteger stunTransport;
    NSInteger transportInterface;
    unsigned int interfaceIndex;
    BOOL alreadySelected;
    BOOL isIPv6;
}






@end


#endif