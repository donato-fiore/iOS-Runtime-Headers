// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BKSTOUCHDELIVERYUPDATE_H
#define BKSTOUCHDELIVERYUPDATE_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface BKSTouchDeliveryUpdate : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) unsigned int contextID; // ivar: _contextID
@property (nonatomic) BOOL isDetached; // ivar: _isDetached
@property (nonatomic) int pid; // ivar: _pid
@property (nonatomic) unsigned int touchIdentifier; // ivar: _touchIdentifier
@property (nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif