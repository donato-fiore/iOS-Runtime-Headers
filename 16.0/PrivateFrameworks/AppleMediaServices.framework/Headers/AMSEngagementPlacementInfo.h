// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSENGAGEMENTPLACEMENTINFO_H
#define AMSENGAGEMENTPLACEMENTINFO_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface AMSEngagementPlacementInfo : NSObject

@property (readonly, nonatomic) NSDictionary *context; // ivar: _context
@property (readonly, nonatomic) NSString *placement; // ivar: _placement


-(id)initWithPlacement:(id)arg0 context:(id)arg1 ;
-(id)makeRawDictionary;


@end


#endif