// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC8VIDEOSUI27JSMULTIPARTPROMISEOPERATION_H
#define _TTC8VIDEOSUI27JSMULTIPARTPROMISEOPERATION_H

@protocol _TtP8VideosUI36JSMultiPartPromiseOperationInterface_;


#import "VUIJSObject.h"

@interface _TtC8VideosUI27JSMultiPartPromiseOperation : VUIJSObject <_TtP8VideosUI36JSMultiPartPromiseOperationInterface_>



@property (nonatomic) BOOL loadImmediately; // ivar: loadImmediately


-(id)init;
-(id)initWithAppContext:(id)arg0 ;
-(id)initWithStart:(id)arg0 hasFragment:(id)arg1 getFragment:(id)arg2 cancel:(id)arg3 ;
-(void)dealloc;


@end


#endif