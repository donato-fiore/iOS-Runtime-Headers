// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPTCLIENTINTERFACE_H
#define PPTCLIENTINTERFACE_H


#import <Foundation/Foundation.h>


@interface PPTClientInterface : NSObject



+(id)getAllFrameworkSubsystem;
+(id)getAllSubsystem;
+(id)getMetadataByCategoryForSubsystem:(id)arg0 ;
+(id)getMetadataByNameForSubsystem:(id)arg0 category:(id)arg1 ;
+(id)getMetadataForSubsystem:(id)arg0 ;
+(id)getMetadataForSubsystem:(id)arg0 category:(id)arg1 ;
+(id)getMetadataForSubsystem:(id)arg0 category:(id)arg1 name:(id)arg2 ;
+(id)getMetadataForSubsystem:(id)arg0 category:(id)arg1 name:(id)arg2 version:(CGFloat)arg3 ;
+(void)buildDeviceMetadata;


@end


#endif