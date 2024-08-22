// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMCAMERACLIPENCRYPTIONMANAGER_H
#define HMCAMERACLIPENCRYPTIONMANAGER_H

@class NSData;

#import <Foundation/Foundation.h>


@interface HMCameraClipEncryptionManager : NSObject

@property (readonly, copy) NSData *key; // ivar: _key


-(id)encryptedDataContextFromData:(id)arg0 ;
-(id)init;
-(id)initWithKey:(id)arg0 ;


@end


#endif