// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BLASTDOORMESSAGEPARTATTRIBUTE_H
#define BLASTDOORMESSAGEPARTATTRIBUTE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface BlastDoorMessagePartAttribute : NSObject {
    ? messagePartAttribute;
}


@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSUInteger partNumber;
@property (nonatomic, readonly) _NSRange range;


-(id)init;


@end


#endif