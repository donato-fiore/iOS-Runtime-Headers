// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTSEARCHRESPONSE_H
#define MTSEARCHRESPONSE_H

@protocol MTMAPIResponse;

#import <Foundation/Foundation.h>


@interface MTSearchResponse : NSObject <MTMAPIResponse>

 {
    ? response;
    ? params;
    ? parsedObjectsCache;
}




-(NSUInteger)numberOfItemsInSection:(NSUInteger)arg0 ;
-(NSUInteger)numberOfSections;
-(id)init;
-(id)itemInSection:(NSInteger)arg0 row:(NSInteger)arg1 ;
-(id)itemsFor:(NSInteger)arg0 ;
-(id)sectionAtIndex:(NSUInteger)arg0 ;


@end


#endif