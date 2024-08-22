// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SNFILESERVERINFO_H
#define SNFILESERVERINFO_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SNFileServerInfo : NSObject {
    NSString *_identifier;
    NSString *_idsDeviceID;
    NSString *_model;
    NSString *_name;
}


@property (readonly) NSString *identifier;
@property (readonly) NSString *idsDeviceID;
@property (readonly) NSString *model;
@property (readonly) NSString *name;




@end


#endif