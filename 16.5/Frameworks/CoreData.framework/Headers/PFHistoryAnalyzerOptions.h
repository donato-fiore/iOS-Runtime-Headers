// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFHISTORYANALYZEROPTIONS_H
#define PFHISTORYANALYZEROPTIONS_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PFHistoryAnalyzerOptions : NSObject <NSCopying>

 {
    BOOL _automaticallyPruneTransientRecords;
    NSUInteger _transactionLimit;
}




-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif