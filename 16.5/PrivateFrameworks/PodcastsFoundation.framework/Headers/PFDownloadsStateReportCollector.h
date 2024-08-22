// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFDOWNLOADSSTATEREPORTCOLLECTOR_H
#define PFDOWNLOADSSTATEREPORTCOLLECTOR_H


#import <Foundation/Foundation.h>


@interface PFDownloadsStateReportCollector : NSObject {
    ? checker;
}




-(id)init;
-(id)initWithManagedObjectContext:(id)arg0 episodePropertiesToReport:(id)arg1 showPropertiesToReport:(id)arg2 ;
-(void)generateReportWithCompletionHandler:(id)arg0 ;


@end


#endif