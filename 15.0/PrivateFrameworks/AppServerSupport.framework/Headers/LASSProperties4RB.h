// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LASSPROPERTIES4RB_H
#define LASSPROPERTIES4RB_H

@class NSUUID, NSString;
@protocol OS_xpc_object;

#import <Foundation/Foundation.h>


@interface LASSProperties4RB : NSObject

@property (readonly, nonatomic) NSObject<OS_xpc_object> *additionalProperties; // ivar: _additionalProperties
@property (readonly, nonatomic) NSUUID *instance; // ivar: _instance
@property (readonly, nonatomic) NSString *label; // ivar: _label
@property (readonly, nonatomic) NSString *program; // ivar: _program
@property (readonly, nonatomic) int requestedJetsamPriority; // ivar: _requestedJetsamPriority


+(id)_propertiesFromAttrs:(id)arg0 ;
+(id)propertiesForJob:(id)arg0 error:(*id)arg1 ;
+(id)propertiesForPid:(int)arg0 error:(*id)arg1 ;
-(id)initWithLabel:(id)arg0 instance:(id)arg1 requestedJetsamPriority:(int)arg2 additionalProperties:(id)arg3 program:(id)arg4 ;


@end


#endif