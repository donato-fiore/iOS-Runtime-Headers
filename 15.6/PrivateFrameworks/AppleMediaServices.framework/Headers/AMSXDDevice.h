// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSXDDEVICE_H
#define AMSXDDEVICE_H

@class NSDictionary, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AMSXDDevice : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSDictionary *JSONDictionary;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)activePairedDevices;
+(id)allPairedDevices;
+(id)deviceFromIdentifier:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDeviceID:(id)arg0 type:(NSInteger)arg1 ;
-(id)initWithJSONDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif