// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICASNOTETYPE_H
#define ICASNOTETYPE_H

@protocol AADataType;

#import <Foundation/Foundation.h>


@interface ICASNoteType : NSObject <AADataType>



@property (readonly, nonatomic) NSInteger noteType; // ivar: _noteType


-(id)initWithNoteType:(NSInteger)arg0 ;
-(id)toJsonValueAndReturnError:(*id)arg0 ;


@end


#endif