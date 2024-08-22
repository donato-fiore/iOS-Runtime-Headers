// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXSSLANGUAGETAG_H
#define AXSSLANGUAGETAG_H

@class NSString, NSMutableOrderedSet;

#import <Foundation/Foundation.h>

#import "AXSSDialectMap.h"

@interface AXSSLanguageTag : NSObject

@property (readonly, copy, nonatomic) NSString *content; // ivar: _content
@property (readonly, nonatomic) BOOL createdFromNewline; // ivar: _createdFromNewline
@property (readonly, nonatomic) AXSSDialectMap *dialect; // ivar: _dialect
@property (nonatomic) NSInteger offsetToInitialLocation; // ivar: _offsetToInitialLocation
@property (retain, nonatomic) NSMutableOrderedSet *predictedSecondaryDialects; // ivar: _predictedSecondaryDialects
@property (readonly, nonatomic) _NSRange taggedRange; // ivar: _taggedRange
@property (readonly, copy, nonatomic) NSString *taggedString; // ivar: _taggedString


-(id)description;
-(id)initWithDialect:(id)arg0 range:(struct _NSRange )arg1 content:(id)arg2 createdFromNewline:(BOOL)arg3 ;
-(void)addPredictedSecondaryDialects:(id)arg0 ;


@end


#endif