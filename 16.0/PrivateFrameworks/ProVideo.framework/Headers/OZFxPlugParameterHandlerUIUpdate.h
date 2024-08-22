// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OZFXPLUGPARAMETERHANDLERUIUPDATE_H
#define OZFXPLUGPARAMETERHANDLERUIUPDATE_H


#import <Foundation/Foundation.h>


@interface OZFxPlugParameterHandlerUIUpdate : NSObject {
    int _paramID;
    unsigned int _notificationFlags;
}




+(id)updateWithParamID:(int)arg0 notificationFlags:(unsigned int)arg1 ;
-(int)paramID;
-(unsigned int)notificationFlags;


@end


#endif