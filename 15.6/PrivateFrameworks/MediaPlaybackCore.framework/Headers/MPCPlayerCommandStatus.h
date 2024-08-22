// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPCPLAYERCOMMANDSTATUS_H
#define MPCPLAYERCOMMANDSTATUS_H

@class NSData, NSString, NSError, MPRemoteCommandStatus;

#import <Foundation/Foundation.h>

#import "MPCPlayerCommandDialog.h"
#import "MPCPlayerCommandRequest.h"

@interface MPCPlayerCommandStatus : NSObject

@property (readonly, nonatomic) NSData *customData;
@property (readonly, nonatomic) NSString *customDataType;
@property (readonly, nonatomic) MPCPlayerCommandDialog *dialog; // ivar: _dialog
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) MPCPlayerCommandRequest *request; // ivar: _request
@property (readonly, nonatomic) MPRemoteCommandStatus *status; // ivar: _status
@property (readonly, nonatomic) NSInteger statusCode;
@property (readonly, nonatomic) NSInteger type;


-(id)description;
-(id)initWithMPStatus:(id)arg0 request:(id)arg1 ;


@end


#endif