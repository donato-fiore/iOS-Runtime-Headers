// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFAUDIOSESSIONCONFIGURATION_H
#define MFAUDIOSESSIONCONFIGURATION_H


#import <Foundation/Foundation.h>


@interface MFAudioSessionConfiguration : NSObject {
    ? category;
    ? routeSharingPolicy;
    ? options;
}




-(id)init;
-(id)initWithCategory:(id)arg0 routeSharingPolicy:(NSUInteger)arg1 options:(NSUInteger)arg2 ;


@end


#endif