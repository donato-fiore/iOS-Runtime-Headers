// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PASDEVICEIDENTIFIER_H
#define _PASDEVICEIDENTIFIER_H

@class NSString, NSUUID;

#import <Foundation/Foundation.h>


@interface _PASDeviceIdentifier : NSObject {
    NSString *_path;
}


@property (readonly) NSUUID *UUID;


-(id)init;
-(id)initWithBasePath:(id)arg0 ;
-(void)reset;


@end


#endif