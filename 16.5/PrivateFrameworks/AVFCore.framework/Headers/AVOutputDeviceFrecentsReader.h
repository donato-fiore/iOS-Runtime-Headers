// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVOUTPUTDEVICEFRECENTSREADER_H
#define AVOUTPUTDEVICEFRECENTSREADER_H

@class NSDictionary, NSString, NSArray;
@protocol AVOutputDeviceFrecentsReading;

#import <Foundation/Foundation.h>


@interface AVOutputDeviceFrecentsReader : NSObject <AVOutputDeviceFrecentsReading>

 {
    NSDictionary *_frecents;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *deviceIDs;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)frecencyInfoForDeviceWithID:(id)arg0 ;
-(id)init;
-(id)initWithFrecentsFilePath:(id)arg0 error:(*id)arg1 ;
-(void)dealloc;


@end


#endif