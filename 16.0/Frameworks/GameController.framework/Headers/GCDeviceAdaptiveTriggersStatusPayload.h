// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GCDEVICEADAPTIVETRIGGERSSTATUSPAYLOAD_H
#define GCDEVICEADAPTIVETRIGGERSSTATUSPAYLOAD_H

@class NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface GCDeviceAdaptiveTriggersStatusPayload : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSNumber *armPosition; // ivar: _armPosition
@property (readonly, nonatomic) NSNumber *mode; // ivar: _mode
@property (readonly, nonatomic) NSNumber *status; // ivar: _status


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initFeedbackWithStatus:(unsigned char)arg0 armPosition:(unsigned char)arg1 mode:(unsigned char)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)redactedDescription;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif