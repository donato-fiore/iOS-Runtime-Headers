// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PNRPHONENUMBERRESOLUTIONRESULT_H
#define PNRPHONENUMBERRESOLUTIONRESULT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PNRPhoneNumberResolutionResult : NSObject

@property (readonly, nonatomic) NSInteger dataSource; // ivar: _dataSource
@property (readonly, nonatomic) NSString *locationName; // ivar: _locationName


-(id)initWithLocationName:(id)arg0 locationDataSource:(NSInteger)arg1 ;


@end


#endif