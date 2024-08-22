// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AATRUSTEDCONTACTHEALTHINFO_H
#define AATRUSTEDCONTACTHEALTHINFO_H

@class NSUUID, NSDate;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface AATrustedContactHealthInfo : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSDate *lastValidCheckTimestamp; // ivar: _lastValidCheckTimestamp


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithID:(id)arg0 lastValidCheckTimeStamp:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif