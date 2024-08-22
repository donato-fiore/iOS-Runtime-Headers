// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EFPRIVACY_H
#define EFPRIVACY_H


#import <Foundation/Foundation.h>


@interface EFPrivacy : NSObject



+(NSInteger)bucketedMessageAgeSinceDate:(id)arg0 leadingDigits:(NSInteger)arg1 ;
+(NSInteger)weeksSinceDate:(id)arg0 ;
+(id)dateByRemovingTimeComponentsFromDate:(id)arg0 ;
+(id)fullyRedactedStringForString:(id)arg0 ;
+(id)partiallyRedactedStringForString:(id)arg0 ;
+(id)partiallyRedactedStringForString:(id)arg0 maximumUnredactedLength:(NSUInteger)arg1 ;
+(unsigned int)bucketMessageCount:(NSUInteger)arg0 ;


@end


#endif