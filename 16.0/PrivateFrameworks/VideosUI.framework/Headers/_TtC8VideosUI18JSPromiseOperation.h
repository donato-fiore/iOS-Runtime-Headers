// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC8VIDEOSUI18JSPROMISEOPERATION_H
#define _TTC8VIDEOSUI18JSPROMISEOPERATION_H

@protocol _TtP8VideosUI27JSPromiseOperationInterface_;


#import "VUIJSObject.h"

@interface _TtC8VideosUI18JSPromiseOperation : VUIJSObject <_TtP8VideosUI27JSPromiseOperationInterface_>



@property (nonatomic) BOOL loadImmediately; // ivar: loadImmediately


-(id)init;
-(id)initWithAppContext:(id)arg0 ;
-(id)initWithPromiseFunction:(id)arg0 cancelFunction:(id)arg1 ;
-(void)dealloc;


@end


#endif