// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKICSPREVIEWMODEL_H
#define EKICSPREVIEWMODEL_H

@class NSData, EKEventStore, NSMutableArray, NSArray;

#import <Foundation/Foundation.h>


@interface EKICSPreviewModel : NSObject {
    NSData *_data;
    EKEventStore *_tempStore;
    EKEventStore *_destStore;
    NSMutableArray *_importedEvents;
    NSMutableArray *_unimportedEvents;
    NSUInteger _options;
    NSUInteger _actionsState;
}


@property (readonly, nonatomic) NSUInteger actionsState;
@property (readonly, nonatomic) NSArray *allEvents;
@property (readonly, nonatomic) EKEventStore *eventStore;
@property (readonly, nonatomic) NSUInteger importedEventCount;
@property (readonly, nonatomic) NSArray *importedEvents;
@property (readonly, nonatomic) BOOL shouldUpdate; // ivar: _shouldUpdate
@property (readonly, nonatomic) NSUInteger totalEventCount;
@property (readonly, nonatomic) NSUInteger unimportedEventCount;
@property (readonly, nonatomic) NSArray *unimportedEvents;


-(id)importAllIntoCalendar:(id)arg0 ;
-(id)importEvent:(id)arg0 intoCalendar:(id)arg1 ;
-(id)initWithICSData:(id)arg0 eventStore:(id)arg1 options:(NSUInteger)arg2 ;


@end


#endif