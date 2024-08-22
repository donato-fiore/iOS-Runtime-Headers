// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVINTERNALDEVICELIST_H
#define AVINTERNALDEVICELIST_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface AVInternalDeviceList : NSObject {
    id *changeListener;
    NSMutableArray *deviceList;
    _opaque_pthread_mutex_t listLock;
}


@property (copy, nonatomic) id *changeListener;


+(id)defaultDeviceOfType:(unsigned int)arg0 ;
+(id)newDeviceList;
-(id)deviceList;
-(id)init;
-(unsigned int)dataSourceControlID;
-(void)cleanup;
-(void)dealloc;
-(void)notifyDeviceListChanged;


@end


#endif