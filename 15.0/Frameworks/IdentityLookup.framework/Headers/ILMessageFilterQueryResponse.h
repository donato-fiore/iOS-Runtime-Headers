// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ILMESSAGEFILTERQUERYRESPONSE_H
#define ILMESSAGEFILTERQUERYRESPONSE_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ILMessageFilterQueryResponse : NSObject <NSSecureCoding>



@property (nonatomic) NSInteger action; // ivar: _action
@property (copy, nonatomic) NSString *version; // ivar: _version


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToQueryResponse:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif