// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _EXEXTENSIONINSTANCEIDENTIFIER_H
#define _EXEXTENSIONINSTANCEIDENTIFIER_H

@class NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _EXExtensionInstanceIdentifier : NSObject <NSSecureCoding>



@property (readonly) NSUUID *identifier; // ivar: _identifier
@property (readonly) BOOL isDefault;


+(BOOL)supportsSecureCoding;
+(id)defaultInstanceIdentifier;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualInstanceIdentifier:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif