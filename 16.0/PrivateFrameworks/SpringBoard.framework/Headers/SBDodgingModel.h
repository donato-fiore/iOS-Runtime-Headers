// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBDODGINGMODEL_H
#define SBDODGINGMODEL_H

@class NSMutableDictionary, NSMutableArray;
@protocol NSMutableCopying;

#import <Foundation/Foundation.h>


@interface SBDodgingModel : NSObject <NSMutableCopying>



@property (retain, nonatomic) NSMutableDictionary *centersForIdentifiers; // ivar: _centersForIdentifiers
@property (retain, nonatomic) NSMutableArray *identifiers; // ivar: _identifiers
@property (nonatomic) CGRect referenceBounds; // ivar: _referenceBounds
@property (retain, nonatomic) NSMutableDictionary *sizesForIdentifiers; // ivar: _sizesForIdentifiers


-(id)description;
-(id)initWithReferenceBounds:(struct CGRect )arg0 ;
-(id)modelByModifyingModelWithBlock:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(struct CGPoint )centerForIdentifier:(id)arg0 ;
-(struct CGSize )sizeForIdentifier:(id)arg0 ;


@end


#endif