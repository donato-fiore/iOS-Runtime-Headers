// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRIFACTORPACKSET_H
#define TRIFACTORPACKSET_H

@class NSString<TRIFactorPackSetId>, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TRIFactorPackSet : NSObject <NSCopying>



@property (readonly, nonatomic) NSString<TRIFactorPackSetId> *ident; // ivar: _ident
@property (readonly, nonatomic) NSArray *packs; // ivar: _packs


+(BOOL)_signatures:(id)arg0 onItems:(id)arg1 areValidUsingPublicCertificate:(id)arg2 ;
+(id)artifactFromCKRecord:(id)arg0 ;
+(id)setWithIdent:(id)arg0 packs:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToSet:(id)arg0 ;
-(BOOL)isStructurallyValid;
-(NSUInteger)hash;
-(id)copyWithReplacementIdent:(id)arg0 ;
-(id)copyWithReplacementPacks:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithIdent:(id)arg0 packs:(id)arg1 ;


@end


#endif