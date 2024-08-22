// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFUSERPHOTOSLIBRARYITEM_H
#define HFUSERPHOTOSLIBRARYITEM_H

@class NSString, HMHome, HMUser;
@protocol HFHomeKitItemProtocol, NSCopying, HFHomeKitObject;


#import "HFItem.h"

@interface HFUserPhotosLibraryItem : HFItem <HFHomeKitItemProtocol, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (readonly, nonatomic) NSObject<HFHomeKitObject> *homeKitObject;
@property (readonly) Class superclass;
@property (readonly, nonatomic) HMUser *user; // ivar: _user


-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithUser:(id)arg0 inHome:(id)arg1 ;


@end


#endif