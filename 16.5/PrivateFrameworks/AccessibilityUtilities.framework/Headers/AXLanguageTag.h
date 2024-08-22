// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXLANGUAGETAG_H
#define AXLANGUAGETAG_H

@class NSMutableOrderedSet, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "AXDialectMap.h"

@interface AXLanguageTag : NSObject <NSCopying>



@property (retain, nonatomic) NSMutableOrderedSet *ambiguousDialects; // ivar: _ambiguousDialects
@property (weak, nonatomic) NSString *content; // ivar: _content
@property (readonly, weak, nonatomic) NSString *contentSubstring;
@property (nonatomic) BOOL createdFromNewline; // ivar: _createdFromNewline
@property (readonly, weak, nonatomic) AXDialectMap *dialect;
@property (readonly, nonatomic) BOOL hasAmbigiousDialects;
@property (retain, nonatomic) NSMutableOrderedSet *predictedSecondaryDialects; // ivar: _predictedSecondaryDialects
@property (readonly, weak, nonatomic) AXDialectMap *preferredAmbiguousDialect;
@property (readonly, weak, nonatomic) AXDialectMap *preferredUnambiguousDialect;
@property (nonatomic) _NSRange range; // ivar: _range
@property (retain, nonatomic) NSMutableOrderedSet *unambiguousDialects; // ivar: _unambiguousDialects
@property (nonatomic) BOOL wasPredicted; // ivar: _wasPredicted


+(id)tagWithDialects:(id)arg0 range:(struct _NSRange )arg1 content:(id)arg2 predictedByTagger:(BOOL)arg3 ;
-(BOOL)canBeSpokenByDialect:(id)arg0 ;
-(BOOL)canBeSpokenByLanguage:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(void)addAmbiguousDialect:(id)arg0 ;
-(void)addAmbiguousDialects:(id)arg0 ;
-(void)addPredictedSecondaryDialects:(id)arg0 ;
-(void)addUnambiguousDialect:(id)arg0 ;


@end


#endif