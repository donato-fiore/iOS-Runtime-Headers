// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PARASYNCCARD_H
#define PARASYNCCARD_H

@class SFCard, NSURL;
@protocol NSSecureCoding;



@interface PARAsyncCard : SFCard <NSSecureCoding>



@property (readonly, copy, nonatomic) NSURL *cardURL;
@property (readonly, nonatomic) NSUInteger clientQueryId; // ivar: _clientQueryId
@property (nonatomic) CGFloat scale; // ivar: _scale


+(BOOL)supportsSecureCoding;
+(id)cardWithTitle:(id)arg0 url:(id)arg1 session:(id)arg2 scale:(CGFloat)arg3 queryId:(NSUInteger)arg4 ;
+(id)cardWithTitle:(id)arg0 url:(id)arg1 session:(id)arg2 scale:(CGFloat)arg3 queryId:(NSUInteger)arg4 clientQueryId:(NSUInteger)arg5 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif