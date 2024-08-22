// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXWALLETDATASOURCE_H
#define ATXWALLETDATASOURCE_H


#import <Foundation/Foundation.h>

#import "ATXHeuristicDevice.h"

@interface ATXWalletDataSource : NSObject {
    ATXHeuristicDevice *_device;
}




-(NSUInteger)_getPassStyleMaskForString:(id)arg0 ;
-(id)_extractRelevantSemanticTagsFromPass:(id)arg0 ;
-(id)initWithDevice:(id)arg0 ;
-(void)passesWithStyle:(id)arg0 callback:(id)arg1 ;


@end


#endif