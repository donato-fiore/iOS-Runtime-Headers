// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MCDOMAINSCACHEENTRY_H
#define MCDOMAINSCACHEENTRY_H

@class NSString, NSNumber;

#import <Foundation/Foundation.h>


@interface MCDomainsCacheEntry : NSObject

@property (retain, nonatomic) NSString *domain; // ivar: _domain
@property (retain, nonatomic) NSString *path; // ivar: _path
@property (retain, nonatomic) NSNumber *port; // ivar: _port
@property (nonatomic) BOOL subdomainsMatch; // ivar: _subdomainsMatch


+(id)normalizedPatternString:(id)arg0 ;
-(BOOL)matchesURL:(id)arg0 ;
-(id)description;
-(id)initWithPattern:(id)arg0 ;


@end


#endif