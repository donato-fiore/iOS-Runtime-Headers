// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EMLISTUNSUBSCRIBEPOSTVALUES_H
#define EMLISTUNSUBSCRIBEPOSTVALUES_H

@class NSURL, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface EMListUnsubscribePostValues : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSURL *oneClickURL; // ivar: _oneClickURL
@property (readonly, nonatomic) NSString *postContent; // ivar: _postContent


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithURL:(id)arg0 postContent:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif