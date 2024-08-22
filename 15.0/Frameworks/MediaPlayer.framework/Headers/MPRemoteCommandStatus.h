// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPREMOTECOMMANDSTATUS_H
#define MPREMOTECOMMANDSTATUS_H

@class NSData, NSString, NSError, MRSendCommandResultStatus;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "MPRemoteCommandHandlerDialog.h"

@interface MPRemoteCommandStatus : NSObject <NSCopying>

 {
    MPRemoteCommandHandlerDialog *_dialog;
}


@property (readonly, copy, nonatomic) NSData *customData;
@property (readonly, copy, nonatomic) NSString *customDataType;
@property (readonly, nonatomic) MPRemoteCommandHandlerDialog *dialog;
@property (readonly, copy, nonatomic) NSError *error;
@property (readonly, copy, nonatomic) MRSendCommandResultStatus *mediaRemoteType; // ivar: _mediaRemoteType
@property (readonly, nonatomic) NSInteger statusCode;
@property (readonly, nonatomic) NSInteger type;


+(id)fetchStatusForCommandID:(id)arg0 ;
+(id)statusWithCode:(NSInteger)arg0 ;
+(id)statusWithCode:(NSInteger)arg0 customData:(id)arg1 type:(id)arg2 ;
+(id)statusWithCode:(NSInteger)arg0 dialog:(id)arg1 ;
+(id)statusWithCode:(NSInteger)arg0 error:(id)arg1 ;
+(id)successStatus;
+(void)cacheStatus:(id)arg0 forCommandID:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithMediaRemoteType:(id)arg0 ;


@end


#endif