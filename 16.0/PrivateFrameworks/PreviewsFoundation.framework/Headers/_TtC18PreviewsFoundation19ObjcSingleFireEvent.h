// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC18PREVIEWSFOUNDATION19OBJCSINGLEFIREEVENT_H
#define _TTC18PREVIEWSFOUNDATION19OBJCSINGLEFIREEVENT_H


#import <Foundation/Foundation.h>


@interface _TtC18PreviewsFoundation19ObjcSingleFireEvent : NSObject {
    ? event;
}


@property (nonatomic, readonly) BOOL hasFired;


-(id)init;
-(void)addObserver:(id)arg0 ;
-(void)cancel;
-(void)fire;


@end


#endif