// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVOUTPUTDEVICEFRECENTSWRITER_H
#define AVOUTPUTDEVICEFRECENTSWRITER_H

@class NSString, NSMutableDictionary;
@protocol AVOutputDeviceFrecentsWriting;

#import <Foundation/Foundation.h>


@interface AVOutputDeviceFrecentsWriter : NSObject <AVOutputDeviceFrecentsWriting>

 {
    NSString *_frecentsFilePath;
    NSMutableDictionary *_frecents;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger numberOfKeysToBeSet;
@property (readonly) Class superclass;


-(BOOL)persistToDiskReturningError:(*id)arg0 ;
-(id)init;
-(id)initWithFrecentsFilePath:(id)arg0 ;
-(void)dealloc;
-(void)removeFrecencyInfoForDeviceID:(id)arg0 ;
-(void)setFrecencyInfo:(id)arg0 forDeviceID:(id)arg1 ;


@end


#endif