// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICASSNAPSHOTERRORDATA_H
#define ICASSNAPSHOTERRORDATA_H

@class NSNumber, NSString;
@protocol AADataEventType;

#import <Foundation/Foundation.h>


@interface ICASSnapshotErrorData : NSObject <AADataEventType>



@property (readonly, nonatomic) NSNumber *errorCode; // ivar: _errorCode
@property (readonly, nonatomic) NSString *errorDomain; // ivar: _errorDomain


+(id)dataName;
-(id)initWithErrorDomain:(id)arg0 errorCode:(id)arg1 ;
-(id)toDict;


@end


#endif