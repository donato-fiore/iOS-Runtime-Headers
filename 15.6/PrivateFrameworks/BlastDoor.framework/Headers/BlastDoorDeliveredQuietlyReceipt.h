// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BLASTDOORDELIVEREDQUIETLYRECEIPT_H
#define BLASTDOORDELIVEREDQUIETLYRECEIPT_H

@class NSString;

#import <Foundation/Foundation.h>

#import "BlastDoorMetadata.h"

@interface BlastDoorDeliveredQuietlyReceipt : NSObject {
    ? deliveredQuietlyReceipt;
}


@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BlastDoorMetadata *metadata;


-(id)init;


@end


#endif