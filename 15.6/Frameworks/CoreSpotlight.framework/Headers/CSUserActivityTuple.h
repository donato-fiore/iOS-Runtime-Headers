// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSUSERACTIVITYTUPLE_H
#define CSUSERACTIVITYTUPLE_H

@class NSString;
@protocol CSIndexQueuableItem;

#import <Foundation/Foundation.h>

#import "CSUserAction.h"
#import "CSSearchableItem.h"

@interface CSUserActivityTuple : NSObject <CSIndexQueuableItem>



@property (retain) CSUserAction *action; // ivar: _action
@property (retain) CSSearchableItem *item; // ivar: _item
@property (retain) NSString *protectionClass; // ivar: _protectionClass


-(id)description;
-(id)initWithAction:(id)arg0 item:(id)arg1 ;
-(id)searchableItem;
-(void)updateWithItem:(id)arg0 ;


@end


#endif