// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HIDUSERDEVICE_H
#define HIDUSERDEVICE_H


#import <Foundation/Foundation.h>


@interface HIDUserDevice : NSObject {
    *__IOHIDUserDevice _device;
    id *_getReportHandler;
    id *_setReportHandler;
    unsigned int _service;
    id *_cancelHandler;
}


@property (readonly) unsigned int service;


-(BOOL)handleReport:(id)arg0 error:(*id)arg1 ;
-(BOOL)handleReport:(id)arg0 withTimestamp:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)setProperty:(id)arg0 forKey:(id)arg1 ;
-(id)description;
-(id)initWithProperties:(id)arg0 ;
-(id)propertyForKey:(id)arg0 ;
-(void)activate;
-(void)cancel;
-(void)dealloc;
-(void)setCancelHandler:(id)arg0 ;
-(void)setDispatchQueue:(id)arg0 ;
-(void)setGetReportHandler:(id)arg0 ;
-(void)setSetReportHandler:(id)arg0 ;


@end


#endif