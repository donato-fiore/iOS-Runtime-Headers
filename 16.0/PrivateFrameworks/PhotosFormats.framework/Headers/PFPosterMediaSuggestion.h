// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PFPOSTERMEDIASUGGESTION_H
#define PFPOSTERMEDIASUGGESTION_H

@class NSString;
@protocol NSSecureCoding, NSCopying;


#import "PFPosterMedia.h"

@interface PFPosterMediaSuggestion : PFPosterMedia <NSSecureCoding, NSCopying>



@property (nonatomic) unsigned short suggestionSubtype; // ivar: _suggestionSubtype
@property (retain, nonatomic) NSString *suggestionUUID; // ivar: _suggestionUUID


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAssetUUID:(id)arg0 suggestionUUID:(id)arg1 suggestionSubtype:(unsigned short)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif