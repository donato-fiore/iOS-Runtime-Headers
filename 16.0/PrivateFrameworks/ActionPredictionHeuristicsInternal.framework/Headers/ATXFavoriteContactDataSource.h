// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXFAVORITECONTACTDATASOURCE_H
#define ATXFAVORITECONTACTDATASOURCE_H


#import <Foundation/Foundation.h>

#import "ATXHeuristicDevice.h"

@interface ATXFavoriteContactDataSource : NSObject {
    ATXHeuristicDevice *_device;
}




+(id)_entryToDict:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(void)favoritesWithContacts:(id)arg0 callback:(id)arg1 ;


@end


#endif