// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSCONTENTBLOCKERSTATISTICSFIRSTPARTY_H
#define WBSCONTENTBLOCKERSTATISTICSFIRSTPARTY_H

@class NSString;

#import <Foundation/Foundation.h>


@interface WBSContentBlockerStatisticsFirstParty : NSObject

@property (readonly, nonatomic) NSString *domain; // ivar: _domain
@property (readonly, nonatomic) CGFloat lastSeen; // ivar: _lastSeen


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithDomain:(id)arg0 lastSeen:(CGFloat)arg1 ;


@end


#endif