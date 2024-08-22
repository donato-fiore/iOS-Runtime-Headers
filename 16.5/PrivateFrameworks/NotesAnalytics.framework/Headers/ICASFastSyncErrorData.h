// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICASFASTSYNCERRORDATA_H
#define ICASFASTSYNCERRORDATA_H

@class NSNumber;
@protocol AADataEventType;

#import <Foundation/Foundation.h>


@interface ICASFastSyncErrorData : NSObject <AADataEventType>



@property (readonly, nonatomic) NSNumber *countOfIgnoredMessages; // ivar: _countOfIgnoredMessages
@property (readonly, nonatomic) NSNumber *errorCode; // ivar: _errorCode


+(id)dataName;
-(id)initWithErrorCode:(id)arg0 countOfIgnoredMessages:(id)arg1 ;
-(id)toDict;


@end


#endif