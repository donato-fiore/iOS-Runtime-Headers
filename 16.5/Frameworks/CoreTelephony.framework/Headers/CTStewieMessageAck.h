// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CTSTEWIEMESSAGEACK_H
#define CTSTEWIEMESSAGEACK_H

@class NSError;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTStewieMessageAck : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSError *error; // ivar: _error
@property (nonatomic) BOOL success; // ivar: _success
@property (nonatomic) NSInteger transportType; // ivar: _transportType


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToMessageAck:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithError:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif