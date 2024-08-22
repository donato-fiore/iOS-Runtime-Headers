// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSPHISHINGCONFIGURATIONOVERRIDE_H
#define WBSPHISHINGCONFIGURATIONOVERRIDE_H

@class NSRegularExpression;

#import <Foundation/Foundation.h>


@interface WBSPhishingConfigurationOverride : NSObject

@property (readonly, nonatomic) NSUInteger classification; // ivar: _classification
@property (readonly, nonatomic) NSRegularExpression *expression; // ivar: _expression


-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 error:(*id)arg1 ;
-(id)initWithExpression:(id)arg0 classification:(id)arg1 error:(*id)arg2 ;


@end


#endif