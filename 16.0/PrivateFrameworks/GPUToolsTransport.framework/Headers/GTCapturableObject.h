// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GTCAPTURABLEOBJECT_H
#define GTCAPTURABLEOBJECT_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface GTCapturableObject : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, nonatomic) NSUInteger objectID; // ivar: _objectID
@property (readonly, nonatomic) int type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(int)arg0 name:(id)arg1 address:(NSUInteger)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif