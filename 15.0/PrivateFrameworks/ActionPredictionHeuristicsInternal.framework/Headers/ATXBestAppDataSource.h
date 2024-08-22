// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXBESTAPPDATASOURCE_H
#define ATXBESTAPPDATASOURCE_H

@class UABestAppSuggestionManager;

#import <Foundation/Foundation.h>

#import "ATXHeuristicDevice.h"

@interface ATXBestAppDataSource : NSObject {
    ATXHeuristicDevice *_device;
    UABestAppSuggestionManager *_bestAppSuggestionManager;
}




-(id)initWithDevice:(id)arg0 ;
-(void)bestAppSuggestionWithCallback:(id)arg0 ;


@end


#endif