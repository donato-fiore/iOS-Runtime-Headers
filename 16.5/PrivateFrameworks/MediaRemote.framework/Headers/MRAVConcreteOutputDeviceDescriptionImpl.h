// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRAVCONCRETEOUTPUTDEVICEDESCRIPTIONIMPL_H
#define MRAVCONCRETEOUTPUTDEVICEDESCRIPTIONIMPL_H

@class NSString, NSArray;
@protocol MRAVOutputDeviceDescriptionImpl, AVOutputDeviceDescription;

#import <Foundation/Foundation.h>


@interface MRAVConcreteOutputDeviceDescriptionImpl : NSObject <MRAVOutputDeviceDescriptionImpl>



@property (readonly, nonatomic) NSObject<AVOutputDeviceDescription> *avDescription; // ivar: _avDescription
@property (readonly, nonatomic, getter=isClusterLeader) BOOL clusterLeader;
@property (readonly, nonatomic) unsigned int clusterType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) unsigned int deviceSubtype;
@property (readonly, nonatomic) unsigned int deviceType;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *modelID;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *roomID;
@property (readonly, nonatomic) NSString *roomName;
@property (readonly, nonatomic) NSArray *subComponents;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsEngageOnClusterActivation;
@property (readonly, nonatomic) NSString *uid;


-(id)initWithAVDescription:(id)arg0 ;


@end


#endif