// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSTCONCURRENTSTYLESHEET_H
#define TSTCONCURRENTSTYLESHEET_H

@class NSMapTable, TSSStylesheet;

#import <Foundation/Foundation.h>


@interface TSTConcurrentStylesheet : NSObject {
    os_unfair_lock_s _repairOrReplaceLock;
    os_unfair_lock_s _variationLock;
}


@property (retain, nonatomic) NSMapTable *repairOrReplaceMap; // ivar: _repairOrReplaceMap
@property (retain, nonatomic) TSSStylesheet *stylesheet; // ivar: _stylesheet
@property (retain, nonatomic) NSMapTable *variationMap; // ivar: _variationMap


-(id)initWithStylesheet:(id)arg0 ;
-(id)repairOrReplaceErrantStyle:(id)arg0 ;
-(id)variationOfStyle:(id)arg0 propertyMap:(id)arg1 ;


@end


#endif