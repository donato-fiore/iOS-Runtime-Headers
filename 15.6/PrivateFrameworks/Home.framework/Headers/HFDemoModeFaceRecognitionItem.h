// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFDEMOMODEFACERECOGNITIONITEM_H
#define HFDEMOMODEFACERECOGNITIONITEM_H

@class NSString, HMHome, HMPerson, HMPersonManager;
@protocol HFPersonLikeItem, NSCopying;


#import "HFItem.h"
#import "HFDemoModeFaceRecognitionRecentsData.h"

@interface HFDemoModeFaceRecognitionItem : HFItem <HFPersonLikeItem, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) HFDemoModeFaceRecognitionRecentsData *demoRecentsEntry; // ivar: _demoRecentsEntry
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (readonly, copy, nonatomic) HMPerson *person;
@property (readonly, nonatomic) HMPersonManager *personManager;
@property (readonly) Class superclass;


+(id)dateFormatter;
-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithRecentsData:(id)arg0 home:(id)arg1 ;


@end


#endif