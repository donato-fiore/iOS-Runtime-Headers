// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXNOTIFICATIONRESOLUTIONDICTIONARYSOURCE_H
#define ATXNOTIFICATIONRESOLUTIONDICTIONARYSOURCE_H

@class NSDictionary, NSString;
@protocol ATXNotificationResolutionSourceProtocol;

#import <Foundation/Foundation.h>


@interface ATXNotificationResolutionDictionarySource : NSObject <ATXNotificationResolutionSourceProtocol>

 {
    NSDictionary *_resolutionDictionary;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithResolutionDictionary:(id)arg0 ;
-(id)resolutionsForNotifications:(id)arg0 ;


@end


#endif