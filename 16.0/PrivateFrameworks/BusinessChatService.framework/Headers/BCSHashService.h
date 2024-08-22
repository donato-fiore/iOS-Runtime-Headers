// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BCSHASHSERVICE_H
#define BCSHASHSERVICE_H


#import <Foundation/Foundation.h>


@interface BCSHashService : NSObject



+(BOOL)isValidFullHash:(id)arg0 ;
+(NSInteger)SHA256TruncatedHashForInputString:(id)arg0 includedBytes:(NSUInteger)arg1 ;
+(NSInteger)truncatedHashForFullHash:(id)arg0 includedBytes:(NSUInteger)arg1 ;
+(id)SHA256HashForInputString:(id)arg0 ;


@end


#endif