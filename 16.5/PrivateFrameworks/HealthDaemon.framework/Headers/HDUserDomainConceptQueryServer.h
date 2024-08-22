// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDUSERDOMAINCONCEPTQUERYSERVER_H
#define HDUSERDOMAINCONCEPTQUERYSERVER_H

@class NSArray, HKQueryAnchor;


#import "HDQueryServer.h"

@interface HDUserDomainConceptQueryServer : HDQueryServer {
    NSInteger _limit;
    NSArray *_sortDescriptors;
    HKQueryAnchor *_anchor;
}




+(Class)queryClass;
-(id)initWithUUID:(id)arg0 configuration:(id)arg1 client:(id)arg2 delegate:(id)arg3 ;
-(void)_queue_start;


@end


#endif