// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICASNOTEEDITORCALLOUTBARDATA_H
#define ICASNOTEEDITORCALLOUTBARDATA_H

@protocol AADataEventType;

#import <Foundation/Foundation.h>

#import "ICASNoteEditorCallOutBarButtonType.h"

@interface ICASNoteEditorCallOutBarData : NSObject <AADataEventType>



@property (readonly, nonatomic) ICASNoteEditorCallOutBarButtonType *noteEditorCallOutBarButtonType; // ivar: _noteEditorCallOutBarButtonType


+(id)dataName;
-(id)initWithNoteEditorCallOutBarButtonType:(id)arg0 ;
-(id)toDict;


@end


#endif