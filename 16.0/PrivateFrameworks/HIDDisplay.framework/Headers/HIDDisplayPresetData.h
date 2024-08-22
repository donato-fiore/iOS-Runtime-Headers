// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HIDDISPLAYPRESETDATA_H
#define HIDDISPLAYPRESETDATA_H

@class NSData;

#import <Foundation/Foundation.h>

#import "HIDDisplayPresetInterface.h"

@interface HIDDisplayPresetData : NSObject {
    NSInteger _index;
    HIDDisplayPresetInterface *_deviceRef;
}


@property (readonly) NSData *uniqueID;
@property (readonly) BOOL valid;
@property (readonly) BOOL writable;


-(BOOL)set:(id)arg0 error:(*id)arg1 ;
-(id)get:(*id)arg0 ;
-(id)hidDisplay;
-(id)initWithDisplayDevice:(id)arg0 index:(NSInteger)arg1 ;
-(void)setHidDisplay:(id)arg0 ;


@end


#endif