// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLASTDOORMESSAGECONTENT_H
#define BLASTDOORMESSAGECONTENT_H

@class NSAttributedString, NSString;

#import <Foundation/Foundation.h>


@interface BlastDoorMessageContent : NSObject {
    ? messageContent;
}


@property (nonatomic, readonly) NSAttributedString *content;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *plainTextBody;
@property (nonatomic, readonly) NSString *plainTextSubject;


-(id)init;


@end


#endif