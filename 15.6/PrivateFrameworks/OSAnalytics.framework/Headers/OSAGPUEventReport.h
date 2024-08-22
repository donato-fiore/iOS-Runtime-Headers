// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OSAGPUEVENTREPORT_H
#define OSAGPUEVENTREPORT_H

@class NSDictionary, NSString;


#import "OSAReport.h"

@interface OSAGPUEventReport : OSAReport {
    NSDictionary *_event;
    NSString *_tailspinPath;
}




-(id)appleCareDetails;
-(id)initWithDictionary:(id)arg0 ;
-(id)problemType;
-(id)reportNamePrefix;
-(void)generateLogAtLevel:(BOOL)arg0 withBlock:(id)arg1 ;


@end


#endif