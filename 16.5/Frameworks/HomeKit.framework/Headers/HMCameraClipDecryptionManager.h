// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMCAMERACLIPDECRYPTIONMANAGER_H
#define HMCAMERACLIPDECRYPTIONMANAGER_H

@class NSData;

#import <Foundation/Foundation.h>


@interface HMCameraClipDecryptionManager : NSObject

@property (readonly, copy) NSData *key; // ivar: _key


-(id)dataFromEncryptedDataContext:(id)arg0 ;
-(id)initWithKey:(id)arg0 ;


@end


#endif