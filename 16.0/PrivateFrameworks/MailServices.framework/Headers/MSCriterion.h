// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSCRITERION_H
#define MSCRITERION_H

@class NSString;
@protocol NSSecureCoding, NSObject;

#import <Foundation/Foundation.h>


@interface MSCriterion : NSObject <NSSecureCoding>

 {
    NSString *_type;
    NSString *_qualifier;
    id<NSObject> *_criteria;
}




+(BOOL)supportsSecureCoding;
-(id)_initWithType:(id)arg0 qualifier:(id)arg1 criteria:(id)arg2 ;
-(id)criteria;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCriteria:(id)arg0 allRequired:(BOOL)arg1 ;
-(id)initWithType:(id)arg0 qualifier:(id)arg1 expression:(id)arg2 ;
-(id)qualifier;
-(id)type;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif