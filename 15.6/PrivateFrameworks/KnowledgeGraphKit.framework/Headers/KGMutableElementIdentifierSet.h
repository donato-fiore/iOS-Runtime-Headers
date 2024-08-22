// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef KGMUTABLEELEMENTIDENTIFIERSET_H
#define KGMUTABLEELEMENTIDENTIFIERSET_H



#import "KGElementIdentifierSet.h"

@interface KGMutableElementIdentifierSet : KGElementIdentifierSet



-(*void)mutableBitmap;
-(id)copy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)addIdentifier:(NSUInteger)arg0 ;
-(void)formSymmetricDifferenceWithIdentifierSet:(id)arg0 ;
-(void)intersectWithIdentifierSet:(id)arg0 ;
-(void)removeAllIdentifiers;
-(void)removeIdentifier:(NSUInteger)arg0 ;
-(void)subtractIdentifierSet:(id)arg0 ;
-(void)unionWithIdentifierSet:(id)arg0 ;


@end


#endif