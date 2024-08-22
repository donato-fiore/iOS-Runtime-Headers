// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDISTRIBUTEDTIMESTAMPSPARSEVECTOR_H
#define CKDISTRIBUTEDTIMESTAMPSPARSEVECTOR_H

@class NSMutableDictionary;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CKDistributedTimestampSparseVector : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSMutableDictionary *clockValues; // ivar: _clockValues


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)timestampCount;
-(NSUInteger)timestampCountForSiteIdentifier:(id)arg0 ;
-(id)allSiteIdentifiers;
-(id)clockValuesForSiteIdentifier:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)vectorFilteredByModifier:(id)arg0 ;
-(id)vectorFilteredBySiteIdentifiers:(id)arg0 ;
-(void)addClockValuesInIndexSet:(id)arg0 forSiteIdentifier:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)intersectVector:(id)arg0 ;
-(void)minusVector:(id)arg0 ;
-(void)removeClockValuesInIndexSet:(id)arg0 forSiteIdentifier:(id)arg1 ;
-(void)unionVector:(id)arg0 ;


@end


#endif