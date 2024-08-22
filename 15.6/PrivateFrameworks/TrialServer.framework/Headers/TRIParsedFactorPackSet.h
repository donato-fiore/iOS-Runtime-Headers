// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRIPARSEDFACTORPACKSET_H
#define TRIPARSEDFACTORPACKSET_H

@class NSString<TRIFactorPackSetId>, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TRIParsedFactorPackSet : NSObject <NSCopying>



@property (readonly, nonatomic) NSString<TRIFactorPackSetId> *ident; // ivar: _ident
@property (readonly, nonatomic) NSArray *packs; // ivar: _packs


+(id)setWithIdent:(id)arg0 packs:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToSet:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithReplacementIdent:(id)arg0 ;
-(id)copyWithReplacementPacks:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithIdent:(id)arg0 packs:(id)arg1 ;


@end


#endif