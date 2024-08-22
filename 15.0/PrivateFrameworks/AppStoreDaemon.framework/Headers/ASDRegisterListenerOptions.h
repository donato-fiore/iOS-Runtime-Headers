// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASDREGISTERLISTENEROPTIONS_H
#define ASDREGISTERLISTENEROPTIONS_H

@class NSString, NSXPCConnection;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ASDRegisterListenerOptions : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *clientID; // ivar: _clientID
@property (retain, nonatomic) NSXPCConnection *endpoint; // ivar: _endpoint


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif