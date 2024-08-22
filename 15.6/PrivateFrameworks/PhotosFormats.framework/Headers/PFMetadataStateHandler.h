// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PFMETADATASTATEHANDLER_H
#define PFMETADATASTATEHANDLER_H

@class NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PFMetadata.h"

@interface PFMetadataStateHandler : NSObject {
    PFMetadata *_metadata;
    NSObject<OS_dispatch_queue> *_queue;
    NSUInteger _stateHandle;
    NSMutableArray *_breadcrumbs;
}




+(id)redactedDescriptionForFileURL:(id)arg0 ;
+(id)redactedDescriptionForPath:(id)arg0 ;
-(id)_stateInformation;
-(id)initWithMetadata:(id)arg0 ;
-(struct os_state_data_s *)stateDataWithHints:(struct os_state_hints_s *)arg0 ;
-(void)_addBreadcrumbWithTimeInterval:(CGFloat)arg0 message:(id)arg1 ;
-(void)addBreadcrumb:(id)arg0 ;
-(void)dealloc;


@end


#endif