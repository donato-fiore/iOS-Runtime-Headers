// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIFOCUSINPUTDEVICEINFO_H
#define _UIFOCUSINPUTDEVICEINFO_H

@class NSString;
@protocol NSCopying, BSXPCCoding;

#import <Foundation/Foundation.h>


@interface _UIFocusInputDeviceInfo : NSObject <NSCopying, BSXPCCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger senderID; // ivar: _senderID
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)infoWithSenderID:(NSUInteger)arg0 ;
-(id)_initWithSenderID:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif