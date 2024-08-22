// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSPHISHINGCONFIGURATIONIMAGECLASSIFIERIDENTIFIER_H
#define WBSPHISHINGCONFIGURATIONIMAGECLASSIFIERIDENTIFIER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface WBSPhishingConfigurationImageClassifierIdentifier : NSObject

@property (readonly, copy, nonatomic) NSString *domainName; // ivar: _domainName
@property (readonly, nonatomic) float minimumConfidence; // ivar: _minimumConfidence


-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 error:(*id)arg1 ;
-(id)initWithDomain:(id)arg0 minimumConfidence:(float)arg1 ;


@end


#endif