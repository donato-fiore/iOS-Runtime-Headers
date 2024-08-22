// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSPHISHINGCONFIGURATIONDOMAIN_H
#define WBSPHISHINGCONFIGURATIONDOMAIN_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface WBSPhishingConfigurationDomain : NSObject

@property (readonly, copy, nonatomic) NSArray *expressions; // ivar: _expressions


-(BOOL)matchesURL:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 error:(*id)arg1 ;
-(id)initWithExpressions:(id)arg0 error:(*id)arg1 ;


@end


#endif