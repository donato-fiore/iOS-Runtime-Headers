// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKAPPLYFOOTERCONTENTLINK_H
#define PKAPPLYFOOTERCONTENTLINK_H

@class NSString, NSURL;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PKApplyFooterContentLink : NSObject <NSCopying>



@property (copy, nonatomic) NSString *analyticsIdentifier; // ivar: _analyticsIdentifier
@property (copy, nonatomic) NSString *linkText; // ivar: _linkText
@property (copy, nonatomic) NSURL *linkURL; // ivar: _linkURL
@property (copy, nonatomic) NSString *termsIdentifier; // ivar: _termsIdentifier


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif