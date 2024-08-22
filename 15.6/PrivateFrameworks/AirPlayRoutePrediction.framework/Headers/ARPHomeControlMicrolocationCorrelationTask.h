// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ARPHOMECONTROLMICROLOCATIONCORRELATIONTASK_H
#define ARPHOMECONTROLMICROLOCATIONCORRELATIONTASK_H

@class NSString;
@protocol _DKKnowledgeQuerying;

#import <Foundation/Foundation.h>

#import "ARPHomeControlCorrelationUtilities.h"

@interface ARPHomeControlMicrolocationCorrelationTask : NSObject

@property (readonly, copy, nonatomic) NSString *file; // ivar: _file
@property (readonly, nonatomic) NSObject<_DKKnowledgeQuerying> *knowledgeStore; // ivar: _knowledgeStore
@property (retain, nonatomic) ARPHomeControlCorrelationUtilities *utilities; // ivar: _utilities


-(id)initWithCorrelationsFile:(id)arg0 knowledgeStore:(id)arg1 ;
-(void)execute;
-(void)registerARPHomeControlNotificationTask;


@end


#endif