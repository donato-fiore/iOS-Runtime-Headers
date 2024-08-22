// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BLASTDOORSMSCTPART_H
#define BLASTDOORSMSCTPART_H

@class NSString;

#import <Foundation/Foundation.h>

#import "BlastDoorSMSCTPartContentWrapper.h"

@interface BlastDoorSMSCTPart : NSObject {
    ? sMSCTPart;
}


@property (nonatomic, readonly) BlastDoorSMSCTPartContentWrapper *content;
@property (nonatomic, readonly) NSString *contentId;
@property (nonatomic, readonly) NSString *contentLocation;
@property (nonatomic, readonly) NSString *contentType;
@property (nonatomic, readonly) NSString *description;


-(id)init;


@end


#endif