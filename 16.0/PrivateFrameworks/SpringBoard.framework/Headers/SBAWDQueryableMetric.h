// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBAWDQUERYABLEMETRIC_H
#define SBAWDQUERYABLEMETRIC_H

@class AWDServerConnection;


#import "SBAWDMetric.h"

@interface SBAWDQueryableMetric : SBAWDMetric {
    AWDServerConnection *_connection;
    id *_builder;
}




-(void)_postQueryableMetric;
-(void)registerWithDataBuilder:(id)arg0 ;


@end


#endif