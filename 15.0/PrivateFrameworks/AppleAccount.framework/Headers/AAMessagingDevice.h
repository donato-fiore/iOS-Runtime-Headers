// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AAMESSAGINGDEVICE_H
#define AAMESSAGINGDEVICE_H

@class IDSDevice, NSString;

#import <Foundation/Foundation.h>


@interface AAMessagingDevice : NSObject {
    IDSDevice *_device;
}


@property (readonly, nonatomic) NSString *modelIdentifier; // ivar: _modelIdentifier
@property (readonly, nonatomic) NSString *productBuildVersion; // ivar: _productBuildVersion


-(id)initWithDevice:(id)arg0 ;


@end


#endif