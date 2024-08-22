// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _GCGAMEPADEVENTFUSIONDESCRIPTION_H
#define _GCGAMEPADEVENTFUSIONDESCRIPTION_H

@class NSArray, NSString;
@protocol _GCGamepadEventSourceDescription;

#import <Foundation/Foundation.h>

#import "_GCGamepadEventFusionConfig.h"
#import "_GCGamepadEventFusion.h"

@interface _GCGamepadEventFusionDescription : NSObject <_GCGamepadEventSourceDescription>

 {
    _GCGamepadEventFusionConfig *_config;
    NSArray *_sourcesDescription;
    _GCGamepadEventFusion *_materializedObject;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 sources:(id)arg1 ;
-(id)materializeWithContext:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif