// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BLASTDOORSMSCTPARTCONTENTWRAPPER_H
#define BLASTDOORSMSCTPARTCONTENTWRAPPER_H

@class NSString;

#import <Foundation/Foundation.h>

#import "BlastDoorSMSCTPartAttachment.h"
#import "BlastDoorSMSCTPartPlain.h"
#import "BlastDoorSMSCTPartSMIL.h"

@interface BlastDoorSMSCTPartContentWrapper : NSObject {
    ? sMSCTPart_Content;
}


@property (nonatomic, readonly) BlastDoorSMSCTPartAttachment *attachment;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BlastDoorSMSCTPartPlain *plain;
@property (nonatomic, readonly) BlastDoorSMSCTPartSMIL *smil;
@property (nonatomic, readonly) NSUInteger type;


-(id)init;


@end


#endif