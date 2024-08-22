// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UVOBJCSINGLEFIREEVENT_H
#define UVOBJCSINGLEFIREEVENT_H


#import <Foundation/Foundation.h>

#import "_TtC18PreviewsFoundation19ObjcSingleFireEvent.h"

@interface UVObjCSingleFireEvent : NSObject {
    _TtC18PreviewsFoundation19ObjcSingleFireEvent *_event;
}


@property (readonly, nonatomic) BOOL hasFired;


-(id)init;
-(void)addObserver:(id)arg0 ;
-(void)cancel;
-(void)fire;


@end


#endif