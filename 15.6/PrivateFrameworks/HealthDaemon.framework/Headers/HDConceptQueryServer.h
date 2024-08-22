// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDCONCEPTQUERYSERVER_H
#define HDCONCEPTQUERYSERVER_H



#import "HDQueryServer.h"

@interface HDConceptQueryServer : HDQueryServer



+(Class)queryClass;
-(id)initWithUUID:(id)arg0 configuration:(id)arg1 client:(id)arg2 delegate:(id)arg3 ;
-(void)_queue_start;


@end


#endif