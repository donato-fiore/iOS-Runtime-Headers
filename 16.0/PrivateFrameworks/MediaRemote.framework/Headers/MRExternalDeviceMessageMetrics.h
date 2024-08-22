// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MREXTERNALDEVICEMESSAGEMETRICS_H
#define MREXTERNALDEVICEMESSAGEMETRICS_H

@class NSString, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface MRExternalDeviceMessageMetrics : NSObject {
    NSString *_path;
    NSMutableDictionary *_entries;
}




-(id)initWithPath:(id)arg0 ;
-(void)addMessage:(id)arg0 data:(id)arg1 ;
-(void)dealloc;
-(void)write;


@end


#endif