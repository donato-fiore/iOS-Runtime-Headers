// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVOUTPUTDEVICELEGACYFRECENTSWRITER_H
#define AVOUTPUTDEVICELEGACYFRECENTSWRITER_H

@class NSMutableDictionary, NSMutableArray, NSString;
@protocol AVOutputDeviceFrecentsWriting;

#import <Foundation/Foundation.h>


@interface AVOutputDeviceLegacyFrecentsWriter : NSObject <AVOutputDeviceFrecentsWriting>

 {
    NSMutableDictionary *_updatedFrecentsList;
    NSMutableArray *_keysToRemove;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger numberOfKeysToBeSet;
@property (readonly) Class superclass;


+(id)defaultFrecentsWriter;
-(BOOL)persistToDiskReturningError:(*id)arg0 ;
-(id)init;
-(void)dealloc;
-(void)removeFrecencyInfoForDeviceID:(id)arg0 ;
-(void)setFrecencyInfo:(id)arg0 forDeviceID:(id)arg1 ;


@end


#endif