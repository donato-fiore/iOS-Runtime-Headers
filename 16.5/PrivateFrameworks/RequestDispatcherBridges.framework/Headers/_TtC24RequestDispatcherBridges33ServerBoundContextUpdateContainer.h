// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC24REQUESTDISPATCHERBRIDGES33SERVERBOUNDCONTEXTUPDATECONTAINER_H
#define _TTC24REQUESTDISPATCHERBRIDGES33SERVERBOUNDCONTEXTUPDATECONTAINER_H

@protocol AFContextSnapshot, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _TtC24RequestDispatcherBridges33ServerBoundContextUpdateContainer : NSObject <AFContextSnapshot, NSSecureCoding>

 {
    ? contextUpdate;
}




+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSerializedBackingStore:(id)arg0 ;
-(id)serializedBackingStore;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif