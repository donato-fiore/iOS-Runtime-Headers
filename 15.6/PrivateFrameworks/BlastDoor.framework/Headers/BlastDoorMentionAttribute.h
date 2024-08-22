// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BLASTDOORMENTIONATTRIBUTE_H
#define BLASTDOORMENTIONATTRIBUTE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface BlastDoorMentionAttribute : NSObject {
    ? mentionAttribute;
}


@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) _NSRange range;
@property (nonatomic, readonly) NSString *uri;


-(id)init;


@end


#endif