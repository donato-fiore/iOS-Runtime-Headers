// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INSDEVICEINFO_H
#define INSDEVICEINFO_H

@class NSString;
@protocol INSDeviceInfoMutating;

#import <Foundation/Foundation.h>


@interface INSDeviceInfo : NSObject <INSDeviceInfoMutating>



@property (readonly, nonatomic) NSString *aceVersion; // ivar: _aceVersion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *mutableAceVersion; // ivar: _mutableAceVersion
@property (readonly) Class superclass;


+(id)newWithBuilder:(id)arg0 ;
-(id)initWithAceVersion:(id)arg0 ;


@end


#endif