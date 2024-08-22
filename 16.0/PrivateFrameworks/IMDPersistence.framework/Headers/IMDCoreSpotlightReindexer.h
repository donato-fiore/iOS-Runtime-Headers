// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMDCORESPOTLIGHTREINDEXER_H
#define IMDCORESPOTLIGHTREINDEXER_H


#import <Foundation/Foundation.h>


@interface IMDCoreSpotlightReindexer : NSObject {
    ? index;
    ? deferralTime;
    ? handles;
    ? messageAge;
}




-(id)init;
-(id)initWithHandles:(id)arg0 batchDeferralTime:(NSInteger)arg1 messageAge:(CGFloat)arg2 index:(id)arg3 ;
-(void)reindex;


@end


#endif