// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GDKNOSISREQUEST_H
#define GDKNOSISREQUEST_H

@class NSArray, NSNumber, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface GDKnosisRequest : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *intentArgs; // ivar: _intentArgs
@property (readonly, copy, nonatomic) NSNumber *limit; // ivar: _limit
@property (readonly, copy, nonatomic) NSString *query; // ivar: _query


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithQuery:(id)arg0 limit:(id)arg1 intentArgs:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif