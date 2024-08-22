// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFNOTIFICATIONERROR_H
#define SFNOTIFICATIONERROR_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface SFNotificationError : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSString *errorDescription; // ivar: _errorDescription


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif