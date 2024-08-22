// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKTRIPLECONDITION_H
#define CKTRIPLECONDITION_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CKTripleCondition : NSObject <NSCopying, NSSecureCoding>

 {
    ? rawCondition;
}


@property (nonatomic, readonly) NSString *description;


+(BOOL)supportsSecureCoding;
+(void)setSupportsSecureCoding:(BOOL)arg0 ;
-(BOOL)evaluateOn:(id)arg0 ;
-(id)and:(id)arg0 ;
-(id)copyWithZone:(*void)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSubject:(id)arg0 predicate:(id)arg1 object:(id)arg2 ;
-(id)initWithValue:(BOOL)arg0 ;
-(id)or:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif