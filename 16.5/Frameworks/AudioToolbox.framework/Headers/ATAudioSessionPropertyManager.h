// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATAUDIOSESSIONPROPERTYMANAGER_H
#define ATAUDIOSESSIONPROPERTYMANAGER_H


#import <Foundation/Foundation.h>

#import "ATAudioSessionClientImpl.h"

@interface ATAudioSessionPropertyManager : NSObject {
    ATAudioSessionClientImpl *mAsClientImpl;
}




-(id)initWithATAudioSessionClientImpl:(id)arg0 ;
-(int)GetProperty:(unsigned int)arg0 size:(*unsigned int)arg1 data:(*void)arg2 ;
-(int)SetProperty:(unsigned int)arg0 size:(unsigned int)arg1 data:(*void)arg2 ;


@end


#endif