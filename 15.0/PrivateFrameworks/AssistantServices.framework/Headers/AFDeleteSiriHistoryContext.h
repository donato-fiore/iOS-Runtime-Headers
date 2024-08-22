// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AFDELETESIRIHISTORYCONTEXT_H
#define AFDELETESIRIHISTORYCONTEXT_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AFDeleteSiriHistoryContext : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *errorBody; // ivar: _errorBody
@property (readonly, copy, nonatomic) NSString *errorButtonText; // ivar: _errorButtonText
@property (readonly, copy, nonatomic) NSString *errorTitle; // ivar: _errorTitle
@property (readonly, copy, nonatomic) NSString *successBody; // ivar: _successBody
@property (readonly, copy, nonatomic) NSString *successButtonText; // ivar: _successButtonText
@property (readonly, copy, nonatomic) NSString *successTitle; // ivar: _successTitle


+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_descriptionWithIndent:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSuccessTitle:(id)arg0 successBody:(id)arg1 successButtonText:(id)arg2 errorTitle:(id)arg3 errorBody:(id)arg4 errorButtonText:(id)arg5 ;
-(id)mutatedCopyWithMutator:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif