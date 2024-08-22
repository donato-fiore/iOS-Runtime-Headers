// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCSECTIONSUPERGROUPKNOBS_H
#define FCSECTIONSUPERGROUPKNOBS_H

@class NSString;

#import <Foundation/Foundation.h>


@interface FCSectionSupergroupKnobs : NSObject

@property (nonatomic) BOOL isEligible; // ivar: _isEligible
@property (readonly, nonatomic) NSString *nameOverride; // ivar: _nameOverride
@property (readonly, nonatomic) CGFloat rankMultiplier; // ivar: _rankMultiplier


-(id)initWithJSONData:(id)arg0 ;
-(id)initWithJSONString:(id)arg0 ;


@end


#endif