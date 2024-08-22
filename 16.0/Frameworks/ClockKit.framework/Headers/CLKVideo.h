// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLKVIDEO_H
#define CLKVIDEO_H

@class NSURL, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "CLKDevice.h"

@interface CLKVideo : NSObject <NSCopying>

 {
    CLKDevice *_device;
    NSURL *_url;
}


@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSURL *url;


+(id)_videoNamed:(id)arg0 device:(id)arg1 bundle:(id)arg2 modifier:(id)arg3 ;
+(id)videoAtURL:(id)arg0 forDevice:(id)arg1 ;
+(id)videoNamed:(id)arg0 forDevice:(id)arg1 ;
+(id)videoNamed:(id)arg0 forDevice:(id)arg1 inBundle:(id)arg2 ;
+(id)videoWithName:(id)arg0 forDevice:(id)arg1 url:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithName:(id)arg0 forDevice:(id)arg1 url:(id)arg2 ;


@end


#endif