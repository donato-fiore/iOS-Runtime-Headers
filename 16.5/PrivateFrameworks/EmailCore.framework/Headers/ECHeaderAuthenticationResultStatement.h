// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ECHEADERAUTHENTICATIONRESULTSTATEMENT_H
#define ECHEADERAUTHENTICATIONRESULTSTATEMENT_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface ECHeaderAuthenticationResultStatement : NSObject {
    NSUInteger _hash;
}


@property (readonly, copy, nonatomic) NSString *method; // ivar: _method
@property (readonly, copy, nonatomic) NSArray *properties; // ivar: _properties
@property (readonly, copy, nonatomic) NSString *reason; // ivar: _reason
@property (readonly, copy, nonatomic) NSString *result; // ivar: _result


-(id)_valueForPropertyPassingTest:(id)arg0 ;
-(id)initWithMethod:(id)arg0 result:(id)arg1 reason:(id)arg2 properties:(id)arg3 ;
-(id)valueForFullProperty:(id)arg0 ;
-(id)valueForPropertyType:(id)arg0 property:(id)arg1 ;


@end


#endif