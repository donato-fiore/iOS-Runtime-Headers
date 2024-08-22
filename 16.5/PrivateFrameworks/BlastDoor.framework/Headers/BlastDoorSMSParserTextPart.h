// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLASTDOORSMSPARSERTEXTPART_H
#define BLASTDOORSMSPARSERTEXTPART_H

@class NSString;

#import <Foundation/Foundation.h>


@interface BlastDoorSMSParserTextPart : NSObject {
    ? sMSParserTextPart;
}


@property (nonatomic, readonly) NSString *contentLocation;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *text;


-(id)init;


@end


#endif