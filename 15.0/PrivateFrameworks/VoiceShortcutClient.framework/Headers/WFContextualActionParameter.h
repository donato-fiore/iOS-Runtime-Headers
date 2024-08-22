// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFCONTEXTUALACTIONPARAMETER_H
#define WFCONTEXTUALACTIONPARAMETER_H

@class NSString, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WFContextualActionParameter : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *displayString; // ivar: _displayString
@property (readonly, nonatomic) NSDictionary *metadata; // ivar: _metadata
@property (readonly, nonatomic) NSString *type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(id)arg0 displayString:(id)arg1 metadata:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif