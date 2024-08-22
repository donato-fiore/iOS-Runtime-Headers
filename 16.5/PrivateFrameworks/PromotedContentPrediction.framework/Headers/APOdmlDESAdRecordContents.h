// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APODMLDESADRECORDCONTENTS_H
#define APODMLDESADRECORDCONTENTS_H

@class NSString, NSNumber;

#import <Foundation/Foundation.h>

#import "APOdmlServerResponse.h"

@interface APOdmlDESAdRecordContents : NSObject

@property (readonly, nonatomic) NSString *adamID; // ivar: _adamID
@property (nonatomic) BOOL appInstalled; // ivar: _appInstalled
@property (nonatomic) BOOL impressed; // ivar: _impressed
@property (readonly, nonatomic) NSString *instanceID; // ivar: _instanceID
@property (nonatomic) BOOL isDupe; // ivar: _isDupe
@property (retain, nonatomic) APOdmlServerResponse *odmlResponse; // ivar: _odmlResponse
@property (readonly, nonatomic) NSNumber *rerankingErrorCode; // ivar: _rerankingErrorCode
@property (retain, nonatomic) NSString *responseType; // ivar: _responseType
@property (nonatomic) BOOL tapped; // ivar: _tapped


-(id)convertToDictionary;
-(id)initWithInstanceID:(id)arg0 adamID:(id)arg1 odmlResponse:(id)arg2 appInstalled:(BOOL)arg3 isDupe:(BOOL)arg4 rerankingError:(id)arg5 ;
-(void)updateRecordWithEvent:(NSInteger)arg0 ;


@end


#endif