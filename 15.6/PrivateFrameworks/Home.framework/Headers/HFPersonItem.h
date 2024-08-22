// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFPERSONITEM_H
#define HFPERSONITEM_H

@class NSString, HMHome, HMPerson, HMPersonManager;
@protocol NSCopying, HFPersonLikeItem;


#import "HFFetchedHomeKitObjectItem.h"

@interface HFPersonItem : HFFetchedHomeKitObjectItem <NSCopying, HFPersonLikeItem>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (readonly, copy, nonatomic) HMPerson *person;
@property (readonly, nonatomic) HMPersonManager *personManager; // ivar: _personManager
@property (readonly) Class superclass;


-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithPerson:(id)arg0 fromPersonManager:(id)arg1 home:(id)arg2 ;


@end


#endif