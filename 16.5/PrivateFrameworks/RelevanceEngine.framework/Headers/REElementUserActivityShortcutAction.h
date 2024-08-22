// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REELEMENTUSERACTIVITYSHORTCUTACTION_H
#define REELEMENTUSERACTIVITYSHORTCUTACTION_H



#import "REElementUserActivityAction.h"

@interface REElementUserActivityShortcutAction : REElementUserActivityAction

@property (readonly, nonatomic) BOOL isLocalDonation; // ivar: _isLocalDonation


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithUserActivity:(id)arg0 applicationID:(id)arg1 isLocalDonation:(BOOL)arg2 ;
-(void)_submitMetricsWithSuccess:(BOOL)arg0 ;


@end


#endif