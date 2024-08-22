// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGGRAPHMOMENTCHANGE_H
#define PGGRAPHMOMENTCHANGE_H

@class NSString;


#import "PGGraphChange.h"

@interface PGGraphMomentChange : PGGraphChange

@property (readonly, nonatomic) NSString *momentUUID; // ivar: _momentUUID
@property (readonly, nonatomic) NSUInteger updateTypes; // ivar: _updateTypes


-(NSUInteger)type;
-(id)description;
-(id)initWithMomentUUID:(id)arg0 updateTypes:(NSUInteger)arg1 ;
-(void)mergeChange:(id)arg0 ;


@end


#endif