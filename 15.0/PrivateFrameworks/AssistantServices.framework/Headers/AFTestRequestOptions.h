// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AFTESTREQUESTOPTIONS_H
#define AFTESTREQUESTOPTIONS_H

@class NSString, NSNumber;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AFTestRequestOptions : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *inputOrigin; // ivar: _inputOrigin
@property (readonly, copy, nonatomic) NSNumber *isEyesFree; // ivar: _isEyesFree
@property (readonly, nonatomic) NSInteger requestPath; // ivar: _requestPath


+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_descriptionWithIndent:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRequestPath:(NSInteger)arg0 inputOrigin:(id)arg1 isEyesFree:(id)arg2 ;
-(id)mutatedCopyWithMutator:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif