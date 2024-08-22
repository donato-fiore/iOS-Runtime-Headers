// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICASFULLERRORDATA_H
#define ICASFULLERRORDATA_H

@class NSString, NSNumber;
@protocol AADataEventType;

#import <Foundation/Foundation.h>


@interface ICASFullErrorData : NSObject <AADataEventType>



@property (readonly, nonatomic) NSString *errorString; // ivar: _errorString
@property (readonly, nonatomic) NSNumber *fullErrorCode; // ivar: _fullErrorCode


+(id)dataName;
-(id)initWithFullErrorCode:(id)arg0 errorString:(id)arg1 ;
-(id)toDict;


@end


#endif