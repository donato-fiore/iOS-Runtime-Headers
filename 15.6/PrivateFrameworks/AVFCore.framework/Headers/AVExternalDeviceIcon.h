// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVEXTERNALDEVICEICON_H
#define AVEXTERNALDEVICEICON_H

@class NSData;

#import <Foundation/Foundation.h>

#import "AVExternalDeviceIconInternal.h"

@interface AVExternalDeviceIcon : NSObject {
    AVExternalDeviceIconInternal *_externalDeviceIcon;
}


@property (readonly, nonatomic) NSData *imageData;
@property (readonly, nonatomic) CGSize pixelSize;
@property (readonly, nonatomic, getter=isPrerendered) BOOL prerendered;


-(id)initWithDictionary:(id)arg0 ;
-(void)dealloc;


@end


#endif