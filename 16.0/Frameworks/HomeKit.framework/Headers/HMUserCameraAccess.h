// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMUSERCAMERAACCESS_H
#define HMUSERCAMERAACCESS_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface HMUserCameraAccess : NSObject

@property (readonly, nonatomic) NSNumber *number;
@property (readonly, nonatomic) NSUInteger value; // ivar: _value


+(id)accessWithCoder:(id)arg0 ;
+(id)accessWithDict:(id)arg0 ;
+(id)accessWithMessage:(id)arg0 ;
+(id)accessWithNumber:(id)arg0 ;
+(id)accessWithValue:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithNumber:(id)arg0 ;
-(void)addToCoder:(id)arg0 ;
-(void)addToPayload:(id)arg0 ;


@end


#endif