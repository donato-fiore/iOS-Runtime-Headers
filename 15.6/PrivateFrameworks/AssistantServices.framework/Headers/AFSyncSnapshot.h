// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AFSYNCSNAPSHOT_H
#define AFSYNCSNAPSHOT_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AFSyncSnapshot : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *anchor; // ivar: _anchor
@property (nonatomic) NSInteger count; // ivar: _count
@property (copy, nonatomic) NSString *key; // ivar: _key
@property (copy, nonatomic) NSString *validity; // ivar: _validity


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif