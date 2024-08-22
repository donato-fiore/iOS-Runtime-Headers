// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLPERSISTENTHISTORYMARKER_H
#define PLPERSISTENTHISTORYMARKER_H

@class NSString;
@protocol PLPersistentHistoryMarkerOverrides;

#import <Foundation/Foundation.h>


@interface PLPersistentHistoryMarker : NSObject <PLPersistentHistoryMarkerOverrides>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;


+(id)markerWithDate:(id)arg0 ;
+(id)markerWithToken:(id)arg0 ;
+(id)markerWithTransaction:(id)arg0 ;
-(id)changeRequestForFetching;
-(id)overrride_changeRequestForFetching;


@end


#endif