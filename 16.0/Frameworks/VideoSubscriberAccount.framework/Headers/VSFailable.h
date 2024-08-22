// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VSFAILABLE_H
#define VSFAILABLE_H

@class NSError;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface VSFailable : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSError *error; // ivar: _error
@property (nonatomic) NSInteger kind; // ivar: _kind
@property (retain, nonatomic) id *object; // ivar: _object


+(BOOL)supportsSecureCoding;
+(id)decodableClasses;
+(id)failableWithError:(id)arg0 ;
+(id)failableWithObject:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithError:(id)arg0 ;
-(id)initWithObject:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
// -(void)unwrapObject:(id)arg0 error:(unk)arg1  ;


@end


#endif