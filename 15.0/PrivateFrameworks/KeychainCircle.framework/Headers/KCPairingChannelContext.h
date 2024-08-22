// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef KCPAIRINGCHANNELCONTEXT_H
#define KCPAIRINGCHANNELCONTEXT_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface KCPairingChannelContext : NSObject <NSSecureCoding>



@property (retain) NSString *intent; // ivar: _intent
@property (retain) NSString *model; // ivar: _model
@property (retain) NSString *modelClass; // ivar: _modelClass
@property (retain) NSString *modelVersion; // ivar: _modelVersion
@property (retain) NSString *osVersion; // ivar: _osVersion
@property (retain) NSString *uniqueClientID; // ivar: _uniqueClientID
@property (retain) NSString *uniqueDeviceID; // ivar: _uniqueDeviceID


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif