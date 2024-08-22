// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AIMLISEVENTFILTER_H
#define AIMLISEVENTFILTER_H


#import <Foundation/Foundation.h>


@interface AIMLISEventFilter : NSObject {
    ? filter;
}




+(id)allOf:(Class)arg0 ;
+(id)everything;
+(id)someOf:(Class)arg0 types:(id)arg1 ;
-(id)combine:(id)arg0 ;
-(id)init;


@end


#endif