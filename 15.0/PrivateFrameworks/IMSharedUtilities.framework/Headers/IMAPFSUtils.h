// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMAPFSUTILS_H
#define IMAPFSUTILS_H


#import <Foundation/Foundation.h>


@interface IMAPFSUtils : NSObject



+(NSUInteger)purgableFlagsForPath:(id)arg0 error:(*int)arg1 ;
+(id)stringForPurgableFlags:(NSUInteger)arg0 ;


@end


#endif