// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKTINKERSHARINGHELPER_H
#define HKTINKERSHARINGHELPER_H


#import <Foundation/Foundation.h>


@interface HKTinkerSharingHelper : NSObject {
    *__CTServerConnection _ctServerConnection;
}


@property (readonly, nonatomic) BOOL isChinaSKUDevice;
@property (nonatomic) BOOL networkAccessEnabledForHealth;


-(id)init;


@end


#endif