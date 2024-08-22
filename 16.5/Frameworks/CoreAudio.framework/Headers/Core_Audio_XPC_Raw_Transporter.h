// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CORE_AUDIO_XPC_RAW_TRANSPORTER_H
#define CORE_AUDIO_XPC_RAW_TRANSPORTER_H

@protocol NSSecureCoding, OS_xpc_object;

#import <Foundation/Foundation.h>


@interface Core_Audio_XPC_Raw_Transporter : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSObject<OS_xpc_object> *object; // ivar: _object


+(BOOL)supportsSecureCoding;
+(id)object:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithObject:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif