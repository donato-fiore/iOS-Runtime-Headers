// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKPERSISTENTCHANGESTOREINFO_H
#define EKPERSISTENTCHANGESTOREINFO_H

@class NSString;

#import <Foundation/Foundation.h>


@interface EKPersistentChangeStoreInfo : NSObject

@property (retain, nonatomic) NSString *minConsumedClientIdentifier; // ivar: _minConsumedClientIdentifier
@property (nonatomic) int minConsumedSequenceNumber; // ivar: _minConsumedSequenceNumber
@property (nonatomic) int secondMinConsumedSequenceNumber; // ivar: _secondMinConsumedSequenceNumber


-(id)description;


@end


#endif