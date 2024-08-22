// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICASNOTESELECTIONDATA_H
#define ICASNOTESELECTIONDATA_H

@class NSArray;
@protocol AADataEventType;

#import <Foundation/Foundation.h>


@interface ICASNoteSelectionData : NSObject <AADataEventType>



@property (readonly, nonatomic) NSArray *noteIDs; // ivar: _noteIDs


+(id)dataName;
-(id)initWithNoteIDs:(id)arg0 ;
-(id)toDict;


@end


#endif