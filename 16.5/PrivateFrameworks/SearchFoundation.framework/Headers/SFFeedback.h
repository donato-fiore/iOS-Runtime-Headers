// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFFEEDBACK_H
#define SFFEEDBACK_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface SFFeedback : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) NSUInteger queryId; // ivar: _queryId
@property (readonly) NSUInteger timestamp; // ivar: _timestamp


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif