// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLASTDOORBASEWRITINGDIRECTIONATTRIBUTE_H
#define BLASTDOORBASEWRITINGDIRECTIONATTRIBUTE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface BlastDoorBaseWritingDirectionAttribute : NSObject {
    ? baseWritingDirectionAttribute;
}


@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSInteger direction;
@property (nonatomic, readonly) _NSRange range;


-(id)init;


@end


#endif