// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PSGTVOUTMANAGER_H
#define PSGTVOUTMANAGER_H


#import <Foundation/Foundation.h>


@interface PSGTVOutManager : NSObject {
    int _connectedAdapterType;
}




-(id)init;
-(int)connectedAdapterType;
-(void)refreshConnectedAdapterType;


@end


#endif