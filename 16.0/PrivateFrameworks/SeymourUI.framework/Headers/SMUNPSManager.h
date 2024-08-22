// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SMUNPSMANAGER_H
#define SMUNPSMANAGER_H

@class NPSManager;

#import <Foundation/Foundation.h>


@interface SMUNPSManager : NSObject {
    NPSManager *_syncManager;
}




-(id)init;
-(void)synchronizeNanoDomain:(id)arg0 keys:(id)arg1 ;


@end


#endif