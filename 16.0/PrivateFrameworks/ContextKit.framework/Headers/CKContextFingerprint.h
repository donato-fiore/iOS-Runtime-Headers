// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKCONTEXTFINGERPRINT_H
#define CKCONTEXTFINGERPRINT_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CKContextFingerprint : NSObject <NSSecureCoding>



@property (nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)parse:(id)arg0 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif