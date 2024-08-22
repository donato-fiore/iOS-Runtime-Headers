// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ILMESSAGEFILTERQUERYRESPONSE_H
#define ILMESSAGEFILTERQUERYRESPONSE_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ILMessageFilterQueryResponse : NSObject <NSSecureCoding>



@property (nonatomic) NSInteger action; // ivar: _action
@property (nonatomic) NSInteger subAction; // ivar: _subAction
@property (copy, nonatomic) NSString *version; // ivar: _version


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToQueryResponse:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif