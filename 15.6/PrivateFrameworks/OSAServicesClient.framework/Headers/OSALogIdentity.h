// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OSALOGIDENTITY_H
#define OSALOGIDENTITY_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface OSALogIdentity : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *bugType; // ivar: _bugType
@property (readonly, nonatomic) NSString *incidentID; // ivar: _incidentID


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIncidentID:(id)arg0 bugType:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif