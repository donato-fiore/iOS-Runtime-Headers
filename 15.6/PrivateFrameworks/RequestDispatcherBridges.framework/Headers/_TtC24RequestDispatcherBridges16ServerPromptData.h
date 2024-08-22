// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC24REQUESTDISPATCHERBRIDGES16SERVERPROMPTDATA_H
#define _TTC24REQUESTDISPATCHERBRIDGES16SERVERPROMPTDATA_H

@protocol AFContextSnapshot, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _TtC24RequestDispatcherBridges16ServerPromptData : NSObject <AFContextSnapshot, NSSecureCoding>

 {
    ? legacyNLContext;
}




+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSerializedBackingStore:(id)arg0 ;
-(id)serializedBackingStore;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif