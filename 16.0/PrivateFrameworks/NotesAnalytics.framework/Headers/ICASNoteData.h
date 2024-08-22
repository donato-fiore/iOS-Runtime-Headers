// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICASNOTEDATA_H
#define ICASNOTEDATA_H

@class NSNumber, NSString;
@protocol AADataEventType;

#import <Foundation/Foundation.h>

#import "ICASNoteType.h"

@interface ICASNoteData : NSObject <AADataEventType>



@property (readonly, nonatomic) NSNumber *isScrapPaper; // ivar: _isScrapPaper
@property (readonly, nonatomic) NSString *noteID; // ivar: _noteID
@property (readonly, nonatomic) ICASNoteType *noteType; // ivar: _noteType


+(id)dataName;
-(id)initWithNoteID:(id)arg0 noteType:(id)arg1 isScrapPaper:(id)arg2 ;
-(id)toDict;


@end


#endif