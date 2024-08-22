// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _EARGEOLMHELPER_H
#define _EARGEOLMHELPER_H


#import <Foundation/Foundation.h>


@interface _EARGeoLMHelper : NSObject {
    unique_ptr<quasar::Geography, std::default_delete<quasar::Geography>> _geography;
}




-(id)initWithConfiguration:(id)arg0 ;
-(id)regionIdForLatitude:(CGFloat)arg0 longitude:(CGFloat)arg1 ;


@end


#endif