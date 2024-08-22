// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSNOTERESULTBUILDER_H
#define SSNOTERESULTBUILDER_H

@class NSString, NSDate;


#import "SSResultBuilder.h"

@interface SSNoteResultBuilder : SSResultBuilder

@property (retain, nonatomic) NSString *body; // ivar: _body
@property (retain, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (retain, nonatomic) NSString *formattedBody; // ivar: _formattedBody
@property (retain, nonatomic) NSDate *lastOpenDate; // ivar: _lastOpenDate
@property (retain, nonatomic) NSDate *modificationDate; // ivar: _modificationDate
@property (retain, nonatomic) NSString *title; // ivar: _title


+(BOOL)isCoreSpotlightResult;
+(id)bundleId;
-(id)buildCompactCardSection;
-(id)buildInlineCardSection;
-(id)initWithResult:(id)arg0 ;


@end


#endif