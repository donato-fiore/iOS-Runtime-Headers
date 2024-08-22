// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICASFOLDERCONTENTDATA_H
#define ICASFOLDERCONTENTDATA_H

@class NSNumber;
@protocol AADataEventType;

#import <Foundation/Foundation.h>


@interface ICASFolderContentData : NSObject <AADataEventType>



@property (readonly, nonatomic) NSNumber *noteCount; // ivar: _noteCount


+(id)dataName;
-(id)initWithNoteCount:(id)arg0 ;
-(id)toDict;


@end


#endif