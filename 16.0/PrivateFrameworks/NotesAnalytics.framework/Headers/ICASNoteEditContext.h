// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICASNOTEEDITCONTEXT_H
#define ICASNOTEEDITCONTEXT_H

@protocol AADataType;

#import <Foundation/Foundation.h>


@interface ICASNoteEditContext : NSObject <AADataType>



@property (readonly, nonatomic) NSInteger noteEditContext; // ivar: _noteEditContext


-(id)initWithNoteEditContext:(NSInteger)arg0 ;
-(id)toJsonValueAndReturnError:(*id)arg0 ;


@end


#endif