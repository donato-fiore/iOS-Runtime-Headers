// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFACTIONSETBUILDER_H
#define HFACTIONSETBUILDER_H

@class NSString;
@protocol HFComparable, HFIconDescriptor;


#import "HFAbstractBaseActionSetBuilder.h"

@interface HFActionSetBuilder : HFAbstractBaseActionSetBuilder <HFComparable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<HFIconDescriptor> *iconDescriptor; // ivar: _iconDescriptor
@property (nonatomic) BOOL isFavorite; // ivar: _isFavorite
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (readonly) Class superclass;


-(id)_deleteActionSet:(id)arg0 fromHome:(id)arg1 ;
-(id)_lazilyUpdateFavorite;
-(id)_lazilyUpdateIcon;
-(id)_performValidation;
-(id)commitItem;
-(id)compareToObject:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)deleteActionSet;
-(id)initWithExistingObject:(id)arg0 inHome:(id)arg1 ;
-(id)initWithHome:(id)arg0 ;


@end


#endif