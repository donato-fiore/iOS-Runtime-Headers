// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GDKNOSISRESULT_H
#define GDKNOSISRESULT_H

@class NSArray, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface GDKnosisResult : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *answers; // ivar: _answers
@property (readonly, copy, nonatomic) NSString *kgq; // ivar: _kgq
@property (readonly, copy, nonatomic) NSString *query; // ivar: _query
@property (readonly, nonatomic) NSUInteger status; // ivar: _status


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithQuery:(id)arg0 kgq:(id)arg1 status:(NSUInteger)arg2 answers:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif