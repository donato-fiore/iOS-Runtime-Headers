// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICASCOLLABACTIVITYCONTEXTPATH_H
#define ICASCOLLABACTIVITYCONTEXTPATH_H

@protocol AADataType;

#import <Foundation/Foundation.h>


@interface ICASCollabActivityContextPath : NSObject <AADataType>



@property (readonly, nonatomic) NSInteger collabActivityContextPath; // ivar: _collabActivityContextPath


-(id)initWithCollabActivityContextPath:(NSInteger)arg0 ;
-(id)toJsonValueAndReturnError:(*id)arg0 ;


@end


#endif