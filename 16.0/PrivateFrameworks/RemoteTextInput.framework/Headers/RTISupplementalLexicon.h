// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RTISUPPLEMENTALLEXICON_H
#define RTISUPPLEMENTALLEXICON_H

@class NSDictionary, TISupplementalLexicon;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface RTISupplementalLexicon : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSDictionary *iconForIdentifier; // ivar: _iconForIdentifier
@property (readonly, nonatomic) NSUInteger identifier;
@property (readonly, nonatomic) TISupplementalLexicon *lexicon; // ivar: _lexicon


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)iconForIdentifier:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTISupplementalLexicon:(id)arg0 iconForIdentifier:(id)arg1 ;
-(id)initWithTISupplementalLexicon:(id)arg0 iconProvider:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateSupplementalItems:(id)arg0 ;


@end


#endif