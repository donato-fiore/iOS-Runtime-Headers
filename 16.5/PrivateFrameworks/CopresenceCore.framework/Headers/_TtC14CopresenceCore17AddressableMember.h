// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC14COPRESENCECORE17ADDRESSABLEMEMBER_H
#define _TTC14COPRESENCECORE17ADDRESSABLEMEMBER_H

@protocol NSObject, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _TtC14CopresenceCore17AddressableMember : NSObject <NSObject, NSSecureCoding>

 {
    ? handle;
}


@property (nonatomic, readonly) NSInteger hash;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif