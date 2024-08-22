// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GDKNOSISINTENTARGINFO_H
#define GDKNOSISINTENTARGINFO_H

@class NSSet, NSString, NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface GDKnosisIntentArgInfo : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSSet *args; // ivar: _args
@property (readonly, copy, nonatomic) NSString *intent; // ivar: _intent
@property (readonly, copy, nonatomic) NSNumber *score; // ivar: _score


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIntent:(id)arg0 args:(id)arg1 score:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif