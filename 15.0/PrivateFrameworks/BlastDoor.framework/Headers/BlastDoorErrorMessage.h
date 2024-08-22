// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BLASTDOORERRORMESSAGE_H
#define BLASTDOORERRORMESSAGE_H

@class NSString;

#import <Foundation/Foundation.h>

#import "BlastDoorMetadata.h"

@interface BlastDoorErrorMessage : NSObject {
    ? errorMessage;
}


@property (nonatomic, readonly) NSString *additionalInfo;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BlastDoorMetadata *metadata;
@property (nonatomic, readonly) unsigned short type;


-(id)init;


@end


#endif