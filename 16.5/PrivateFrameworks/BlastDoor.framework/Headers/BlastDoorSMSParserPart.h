// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLASTDOORSMSPARSERPART_H
#define BLASTDOORSMSPARSERPART_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface BlastDoorSMSParserPart : NSObject {
    ? sMSParserPart;
}


@property (nonatomic, readonly) NSArray *attachmentParts;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSArray *textParts;


-(id)init;


@end


#endif