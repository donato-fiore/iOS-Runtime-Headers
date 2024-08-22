// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKTRIPLE_H
#define CKTRIPLE_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CKTriple : NSObject <NSSecureCoding>

 {
    ? value;
}


@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSInteger hash;
@property (nonatomic, readonly) NSString *object;
@property (nonatomic, readonly) NSString *predicate;
@property (nonatomic, readonly) NSString *subject;
@property (nonatomic, readonly) NSInteger weight;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSubject:(id)arg0 predicate:(id)arg1 object:(id)arg2 weight:(NSInteger)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif