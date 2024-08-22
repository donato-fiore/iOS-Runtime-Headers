// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKAPPLYFOOTERCONTENT_H
#define PKAPPLYFOOTERCONTENT_H

@class NSString, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PKApplyFooterContent : NSObject <NSCopying>



@property (copy, nonatomic) NSString *footerText; // ivar: _footerText
@property (copy, nonatomic) NSArray *links; // ivar: _links
@property (nonatomic) BOOL shouldDisplayInline; // ivar: _shouldDisplayInline


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithDictionary:(id)arg0 ;
-(id)termsIdentifiers;


@end


#endif