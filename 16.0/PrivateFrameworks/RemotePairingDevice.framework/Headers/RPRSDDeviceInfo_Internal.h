// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RPRSDDEVICEINFO_INTERNAL_H
#define RPRSDDEVICEINFO_INTERNAL_H

@class NSString, NSUUID;

#import <Foundation/Foundation.h>


@interface RPRSDDeviceInfo_Internal : NSObject {
    ? name;
    ? uuid;
}


@property (nonatomic, readonly) NSInteger hash;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSUUID *uuid;


-(BOOL)isEqual:(id)arg0 ;
-(id)init;


@end


#endif