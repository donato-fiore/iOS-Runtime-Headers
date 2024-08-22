// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLPERSISTENTHISTORYMARKERDATE_H
#define PLPERSISTENTHISTORYMARKERDATE_H

@class NSDate, NSString;
@protocol PLPersistentHistoryMarkerOverrides;


#import "PLPersistentHistoryMarker.h"

@interface PLPersistentHistoryMarkerDate : PLPersistentHistoryMarker <PLPersistentHistoryMarkerOverrides>

 {
    NSDate *_date;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithDate:(id)arg0 ;
-(id)overrride_changeRequestForFetching;
-(id)overrride_shortDescription;


@end


#endif