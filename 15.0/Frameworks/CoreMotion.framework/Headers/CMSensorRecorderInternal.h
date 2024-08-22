// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CMSENSORRECORDERINTERNAL_H
#define CMSENSORRECORDERINTERNAL_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CMSensorRecorderInternal : NSObject {
    NSObject<OS_dispatch_queue> *fInternalQueue;
    *void fLocationdConnection;
}




-(BOOL)setSensorSampleRate:(unsigned int)arg0 forType:(int)arg1 ;
-(BOOL)writeSensorDataToFile:(id)arg0 from:(CGFloat)arg1 to:(CGFloat)arg2 forType:(int)arg3 ;
-(id)_newMetaUsingMessage:(char *)arg0 withIdentifier:(NSUInteger)arg1 forType:(int)arg2 ;
-(id)init;
-(id)newDataByID:(NSUInteger)arg0 metaID:(NSUInteger)arg1 forType:(int)arg2 ;
-(id)newMetaByID:(NSUInteger)arg0 forType:(int)arg1 ;
-(id)newMetaFrom:(CGFloat)arg0 to:(CGFloat)arg1 forType:(int)arg2 ;
-(id)newMetaSinceID:(NSUInteger)arg0 forType:(int)arg1 ;
-(void)dealloc;
-(void)teardown;


@end


#endif