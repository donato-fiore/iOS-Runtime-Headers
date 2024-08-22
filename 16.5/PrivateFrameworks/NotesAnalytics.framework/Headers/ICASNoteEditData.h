// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICASNOTEEDITDATA_H
#define ICASNOTEEDITDATA_H

@protocol AADataEventType;

#import <Foundation/Foundation.h>

#import "ICASNoteEditContext.h"

@interface ICASNoteEditData : NSObject <AADataEventType>



@property (readonly, nonatomic) ICASNoteEditContext *noteEditContext; // ivar: _noteEditContext


+(id)dataName;
-(id)initWithNoteEditContext:(id)arg0 ;
-(id)toDict;


@end


#endif