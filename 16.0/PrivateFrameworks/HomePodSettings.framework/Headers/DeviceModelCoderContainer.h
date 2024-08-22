// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DEVICEMODELCODERCONTAINER_H
#define DEVICEMODELCODERCONTAINER_H

@class NSString;
@protocol _TtP15HomePodSettings20DeviceModelMessaging_;

#import <Foundation/Foundation.h>


@interface DeviceModelCoderContainer : NSObject <_TtP15HomePodSettings20DeviceModelMessaging_>

 {
    ? groupID;
    ? groupName;
    ? model;
    ? name;
    ? pairID;
    ? pairName;
    ? roomID;
    ? roomName;
}


@property (nonatomic, copy) NSString *groupID;
@property (nonatomic, copy) NSString *groupName;
@property (nonatomic, copy) NSString *model;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *pairID;
@property (nonatomic, copy) NSString *pairName;
@property (nonatomic, copy) NSString *roomID;
@property (nonatomic, copy) NSString *roomName;


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif