// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKDIFFHUNK_H
#define PKDIFFHUNK_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKDiffHunk : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *key; // ivar: _key
@property (retain, nonatomic) NSString *message; // ivar: _message
@property (retain, nonatomic) id *valueNew; // ivar: _newValue
@property (retain, nonatomic) id *valueOld; // ivar: _oldValue


+(BOOL)supportsSecureCoding;
+(id)hunkWithKey:(id)arg0 oldValue:(id)arg1 newValue:(id)arg2 message:(id)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToDiffHunk:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif