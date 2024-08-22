// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICASDELETEDNOTEDATA_H
#define ICASDELETEDNOTEDATA_H

@class NSNumber;
@protocol AADataEventType;

#import <Foundation/Foundation.h>


@interface ICASDeletedNoteData : NSObject <AADataEventType>



@property (readonly, nonatomic) NSNumber *deletedNoteCount; // ivar: _deletedNoteCount


+(id)dataName;
-(id)initWithDeletedNoteCount:(id)arg0 ;
-(id)toDict;


@end


#endif