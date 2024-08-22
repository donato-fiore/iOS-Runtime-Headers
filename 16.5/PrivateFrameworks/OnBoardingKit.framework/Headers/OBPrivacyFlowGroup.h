// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OBPRIVACYFLOWGROUP_H
#define OBPRIVACYFLOWGROUP_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface OBPrivacyFlowGroup : NSObject

@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSArray *privacyFlows; // ivar: _privacyFlows


+(id)groupFlowsByCombinedHeader:(id)arg0 language:(id)arg1 preferredDeviceTye:(NSUInteger)arg2 ;
-(id)init;
-(id)initWithIdentifier:(id)arg0 privacyFlows:(id)arg1 ;


@end


#endif