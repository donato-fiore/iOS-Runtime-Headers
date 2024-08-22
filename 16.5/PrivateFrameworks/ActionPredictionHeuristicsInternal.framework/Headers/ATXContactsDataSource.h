// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXCONTACTSDATASOURCE_H
#define ATXCONTACTSDATASOURCE_H


#import <Foundation/Foundation.h>

#import "ATXHeuristicDevice.h"

@interface ATXContactsDataSource : NSObject {
    ATXHeuristicDevice *_device;
}




-(id)initWithDevice:(id)arg0 ;
-(void)_contactsWithPredicate:(id)arg0 callback:(id)arg1 ;
-(void)contactsWithEmail:(id)arg0 callback:(id)arg1 ;
-(void)contactsWithIdentifiers:(id)arg0 callback:(id)arg1 ;
-(void)contactsWithName:(id)arg0 callback:(id)arg1 ;
-(void)contactsWithPhone:(id)arg0 callback:(id)arg1 ;


@end


#endif