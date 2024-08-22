// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GDKNOSISANSWER_H
#define GDKNOSISANSWER_H

@class NSString, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface GDKnosisAnswer : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *answerId; // ivar: _answerId
@property (readonly, copy, nonatomic) NSArray *facts; // ivar: _facts
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name


+(BOOL)supportsSecureCoding;
-(id)initWithAnswerId:(id)arg0 name:(id)arg1 facts:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif