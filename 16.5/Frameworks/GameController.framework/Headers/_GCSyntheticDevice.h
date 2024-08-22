// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _GCSYNTHETICDEVICE_H
#define _GCSYNTHETICDEVICE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _GCSyntheticDevice : NSObject

@property (readonly) NSString *identifier; // ivar: _identifier
@property (readonly) unsigned int service; // ivar: _service


+(id)devicePropertiesWithDescription:(id)arg0 ;
+(id)deviceWithService:(unsigned int)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)init;
-(id)initWithService:(unsigned int)arg0 ;
-(void)dealloc;


@end


#endif