// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKCHANGELISTENER_H
#define EKCHANGELISTENER_H

@class NSPointerArray;

#import <Foundation/Foundation.h>


@interface EKChangeListener : NSObject

@property (retain) NSPointerArray *delegates; // ivar: _delegates


+(BOOL)isSyncStatusChangeNotification:(id)arg0 ;
+(id)changedIdentifiersForNotification:(id)arg0 ;
+(id)updatedObjectFor:(id)arg0 changeNotification:(id)arg1 ;
-(id)_orderedDelegates;
-(id)init;
-(void)objectsChangedNotification:(id)arg0 ;
-(void)registerDelegate:(id)arg0 ;


@end


#endif