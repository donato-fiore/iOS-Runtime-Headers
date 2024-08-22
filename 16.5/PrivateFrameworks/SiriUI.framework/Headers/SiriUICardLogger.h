// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRIUICARDLOGGER_H
#define SIRIUICARDLOGGER_H

@class NSDateFormatter;

#import <Foundation/Foundation.h>


@interface SiriUICardLogger : NSObject {
    NSDateFormatter *_dateFormatter;
}




+(id)_sharedInstance;
+(id)logCard:(id)arg0 ;
+(id)logCard:(id)arg0 format:(NSUInteger)arg1 ;
+(id)logCardData:(id)arg0 ;
+(id)logCardData:(id)arg0 format:(NSUInteger)arg1 ;
-(id)_currentFilenameForFormat:(NSUInteger)arg0 ;
-(id)_dateFormatter;
-(id)_nowString;
-(id)init;


@end


#endif