// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WDCITATION_H
#define WDCITATION_H

@class NSMutableArray, NSString;

#import <Foundation/Foundation.h>

#import "WDDocument.h"

@interface WDCitation : NSObject

@property (retain, nonatomic) NSMutableArray *authors; // ivar: mAuthors
@property (readonly, weak) WDDocument *document; // ivar: mDocument
@property (retain, nonatomic) NSString *number; // ivar: mNumber
@property (retain, nonatomic) NSString *pages; // ivar: mPages
@property (retain, nonatomic) NSString *periodicalTitle; // ivar: mPeriodicalTitle
@property (retain, nonatomic) NSString *pubDate; // ivar: mPubDate
@property (retain, nonatomic) NSString *section; // ivar: mSection
@property (retain, nonatomic) NSString *sourceType; // ivar: mSourceType
@property (retain, nonatomic) NSMutableArray *titles; // ivar: mTitles
@property (retain, nonatomic) NSMutableArray *urls; // ivar: mUrls
@property (retain, nonatomic) NSString *volume; // ivar: mVolume
@property (retain, nonatomic) NSString *year; // ivar: mYear


+(?)nodeAtPathnodePtr;
+(?)stringValueForNodeAtPath:(?)arg0 nodePtrtrimStyle;
+(?)stringValuesForNodesAtPath:(?)arg0 nodePtrtrimStyle;
+(?)subStringOfforPath;
+(?)trimStyle;
+(id)endNoteStringForRefType:(int)arg0 ;
+(id)refTypeEnumMap;
+(id)wordRefTypeEnumMap;
+(id)wordStringForRefType:(int)arg0 ;
+(int)refTypeForWordString:(id)arg0 ;
-(id)description;
-(id)initWithDocument:(id)arg0 ;


@end


#endif