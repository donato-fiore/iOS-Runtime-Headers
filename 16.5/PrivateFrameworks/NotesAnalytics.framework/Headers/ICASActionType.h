// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICASACTIONTYPE_H
#define ICASACTIONTYPE_H

@protocol AADataType;

#import <Foundation/Foundation.h>


@interface ICASActionType : NSObject <AADataType>



@property (readonly, nonatomic) NSInteger actionType; // ivar: _actionType


-(id)initWithActionType:(NSInteger)arg0 ;
-(id)toJsonValueAndReturnError:(*id)arg0 ;


@end


#endif