// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVCMNOTIFICATIONDISPATCHERLISTENERKEY_H
#define AVCMNOTIFICATIONDISPATCHERLISTENERKEY_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "AVWeakReference.h"

@interface AVCMNotificationDispatcherListenerKey : NSObject <NSCopying>

 {
    AVWeakReference *_weakReferenceToListener;
    *unk _callback;
    NSString *_name;
    *void _object;
}




+(id)listenerKeyWithWeakReferenceToListener:(id)arg0 callback:(*unk)arg1 name:(id)arg2 object:(*void)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithWeakReferenceToListener:(id)arg0 callback:(*unk)arg1 name:(id)arg2 object:(*void)arg3 ;
-(void)dealloc;


@end


#endif