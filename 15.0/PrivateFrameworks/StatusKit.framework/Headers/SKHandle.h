// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKHANDLE_H
#define SKHANDLE_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SKHandle : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *handleString; // ivar: _handleString


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isExactlyEqualToHandle:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithString:(id)arg0 ;
-(id)initWithString:(id)arg0 mergeID:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif