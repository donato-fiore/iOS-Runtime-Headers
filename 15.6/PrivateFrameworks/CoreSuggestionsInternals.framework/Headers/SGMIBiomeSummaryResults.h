// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGMIBIOMESUMMARYRESULTS_H
#define SGMIBIOMESUMMARYRESULTS_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface SGMIBiomeSummaryResults : NSObject

@property (readonly, nonatomic) NSDictionary *biomeMessageIdByPersistentId; // ivar: _biomeMessageIdByPersistentId
@property (readonly, nonatomic) NSDictionary *biomeSummaryByMessage; // ivar: _biomeSummaryByMessage


-(id)initWithBiomeSummaryByMessage:(id)arg0 biomeMessageIdByPersistentId:(id)arg1 ;


@end


#endif