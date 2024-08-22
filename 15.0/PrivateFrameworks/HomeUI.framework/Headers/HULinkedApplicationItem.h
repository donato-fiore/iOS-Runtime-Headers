// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HULINKEDAPPLICATIONITEM_H
#define HULINKEDAPPLICATIONITEM_H

@class HFItem, NSSet, NSString;



@interface HULinkedApplicationItem : HFItem

@property (retain, nonatomic) NSSet *associatedAccessories; // ivar: _associatedAccessories
@property (readonly, nonatomic) NSString *bundleIdentifier;


-(BOOL)isEqual:(id)arg0 ;
-(id)_failedUpdateOutcome;
-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)init;
-(int)_iconVariantForScale:(CGFloat)arg0 ;


@end


#endif