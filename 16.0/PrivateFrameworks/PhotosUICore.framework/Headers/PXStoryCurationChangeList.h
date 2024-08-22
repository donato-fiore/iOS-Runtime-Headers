// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSTORYCURATIONCHANGELIST_H
#define PXSTORYCURATIONCHANGELIST_H

@class NSSet, NSString;

#import <Foundation/Foundation.h>


@interface PXStoryCurationChangeList : NSObject

@property (readonly, nonatomic) NSSet *demotedIdentifiers; // ivar: _demotedIdentifiers
@property (readonly, nonatomic) NSString *diagnosticDescription;
@property (readonly, nonatomic) BOOL hasAnyChange; // ivar: _hasAnyChange
@property (readonly, nonatomic) NSSet *promotedIdentifiers; // ivar: _promotedIdentifiers


+(id)changeListByCombiningChangeList:(id)arg0 withChangeList:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)changeListByApplyingChangeList:(id)arg0 ;
-(id)changeListByDemotingIdentifiers:(id)arg0 ;
-(id)changeListByPromotingIdentifiers:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithPromotedIdentifiers:(id)arg0 demotedIdentifiers:(id)arg1 ;


@end


#endif