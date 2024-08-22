// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFPASSWORDLISTSECTIONIDENTIFIER_H
#define SFPASSWORDLISTSECTIONIDENTIFIER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SFPasswordListSectionIdentifier : NSObject

@property (copy, nonatomic) NSString *footerText; // ivar: _footerText
@property (copy, nonatomic) NSString *headerText; // ivar: _headerText
@property (nonatomic) NSUInteger type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithType:(NSUInteger)arg0 ;
-(id)initWithType:(NSUInteger)arg0 headerText:(id)arg1 footerText:(id)arg2 ;


@end


#endif