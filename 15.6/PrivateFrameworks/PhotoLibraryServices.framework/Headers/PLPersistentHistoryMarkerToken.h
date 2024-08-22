// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLPERSISTENTHISTORYMARKERTOKEN_H
#define PLPERSISTENTHISTORYMARKERTOKEN_H

@class NSPersistentHistoryToken, NSString;
@protocol PLPersistentHistoryMarkerOverrides;


#import "PLPersistentHistoryMarker.h"

@interface PLPersistentHistoryMarkerToken : PLPersistentHistoryMarker <PLPersistentHistoryMarkerOverrides>

 {
    NSPersistentHistoryToken *_token;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithToken:(id)arg0 ;
-(id)overrride_changeRequestForFetching;
-(id)overrride_shortDescription;


@end


#endif