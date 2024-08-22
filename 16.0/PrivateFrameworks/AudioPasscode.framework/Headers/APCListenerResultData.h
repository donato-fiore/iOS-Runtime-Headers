// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef APCLISTENERRESULTDATA_H
#define APCLISTENERRESULTDATA_H


#import <Foundation/Foundation.h>


@interface APCListenerResultData : NSObject

@property (nonatomic) NSUInteger completionTime; // ivar: _completionTime


-(BOOL)isValid;
-(id)initWithPasscodeDurationNSec:(NSUInteger)arg0 ;
-(void)reset;


@end


#endif