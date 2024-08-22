// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DIPAGE_H
#define DIPAGE_H

@class NSArray, NSDictionary, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DIPage : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSArray *attributes; // ivar: _attributes
@property (nonatomic) NSUInteger page; // ivar: _page
@property (copy, nonatomic) NSDictionary *serverValidationGroup; // ivar: _serverValidationGroup
@property (copy, nonatomic) NSString *subTitle; // ivar: _subTitle
@property (copy, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithAttributes:(id)arg0 title:(id)arg1 subTitle:(id)arg2 page:(NSInteger)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif