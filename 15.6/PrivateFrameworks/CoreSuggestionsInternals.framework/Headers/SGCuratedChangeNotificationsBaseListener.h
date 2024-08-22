// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGCURATEDCHANGENOTIFICATIONSBASELISTENER_H
#define SGCURATEDCHANGENOTIFICATIONSBASELISTENER_H

@class NSMapTable;

#import <Foundation/Foundation.h>


@interface SGCuratedChangeNotificationsBaseListener : NSObject {
    NSMapTable *_liveObserversMap;
}




-(id)init;
// -(void)addObserver:(id)arg0 forObjectLifetime:(unk)arg1  ;
-(void)dealloc;
-(void)fire;
-(void)startListening;
-(void)stopListening;


@end


#endif