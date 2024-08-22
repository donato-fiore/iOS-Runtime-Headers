// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TVRCMEDIAREMOTEKEYBOARDIMPLMANAGER_H
#define _TVRCMEDIAREMOTEKEYBOARDIMPLMANAGER_H

@class NSString;

#import <Foundation/Foundation.h>

#import "_TVRCMediaRemoteLegacyKeyboardImpl.h"
#import "_TVRCMediaRemoteRemoteTextInputKeyboardImpl.h"
#import "_TVRCMRTelevisionWrapper.h"

@interface _TVRCMediaRemoteKeyboardImplManager : NSObject {
    NSString *_version;
    _TVRCMediaRemoteLegacyKeyboardImpl *_legacyImpl;
    _TVRCMediaRemoteRemoteTextInputKeyboardImpl *_rtiImpl;
}


@property (retain, nonatomic) _TVRCMRTelevisionWrapper *television; // ivar: _television


-(id)initWithTelevisionSystemVersion:(id)arg0 ;
-(id)keyboardImpl;


@end


#endif