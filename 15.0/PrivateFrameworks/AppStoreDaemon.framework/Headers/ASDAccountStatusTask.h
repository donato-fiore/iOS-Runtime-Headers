// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASDACCOUNTSTATUSTASK_H
#define ASDACCOUNTSTATUSTASK_H

@protocol NSSecureCoding, ASDClipServiceBroker;

#import <Foundation/Foundation.h>


@interface ASDAccountStatusTask : NSObject <NSSecureCoding>

 {
    id<ASDClipServiceBroker> *_broker;
}


@property BOOL lookupFamilyInfoIfNecessary; // ivar: _lookupFamilyInfoIfNecessary


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)statusWithCompletion:(id)arg0 ;


@end


#endif