// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DTASSETRESPONSE_H
#define DTASSETRESPONSE_H

@class NSData, NSString, DTXMessage;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DTAssetResponse : NSObject <NSSecureCoding>



@property (readonly, nonatomic, getter=isCompleted) BOOL completed; // ivar: _completed
@property (readonly, nonatomic) NSData *data; // ivar: _data
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) DTXMessage *message;


+(BOOL)supportsSecureCoding;
+(id)completedResponseWithIdentifier:(id)arg0 ;
+(id)responseWithIdentifier:(id)arg0 data:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 data:(id)arg1 completed:(BOOL)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif