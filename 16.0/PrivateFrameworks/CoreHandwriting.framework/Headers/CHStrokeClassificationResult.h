// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHSTROKECLASSIFICATIONRESULT_H
#define CHSTROKECLASSIFICATIONRESULT_H

@class NSSet, NSDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CHStrokeClassificationResult : NSObject <NSCopying, NSSecureCoding>

 {
    NSSet *_textStrokeIdentifiers;
}


@property (readonly, copy, nonatomic) NSSet *nontextCandidates; // ivar: _nontextCandidates
@property (readonly, copy, nonatomic) NSDictionary *strokeClassificationsByStrokeIdentifier; // ivar: _strokeClassificationsByStrokeIdentifier
@property (readonly, copy, nonatomic) NSDictionary *substrokesByStrokeIdentifier; // ivar: _substrokesByStrokeIdentifier
@property (readonly, copy, nonatomic) NSSet *textStrokeIdentifiers;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToStrokeClassificationResult:(id)arg0 ;
-(BOOL)isEquivalentToStrokeClassificationResult:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStrokeClassificationsByStrokeIdentifier:(id)arg0 substrokesByStrokeIdentifier:(id)arg1 nontextCandidates:(id)arg2 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif