// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REDUETCONTEXTDEVICE_H
#define REDUETCONTEXTDEVICE_H

@class NSUUID;

#import <Foundation/Foundation.h>


@interface REDuetContextDevice : NSObject

@property (readonly, nonatomic) NSUInteger deviceType; // ivar: _deviceType
@property (readonly, nonatomic) NSUUID *identifier; // ivar: _identifier


+(id)companionDevice;
+(id)localDevice;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithUUID:(id)arg0 type:(NSUInteger)arg1 ;


@end


#endif