// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GDMOCKCNFETCHRESULT_H
#define GDMOCKCNFETCHRESULT_H

@class NSData;

#import <Foundation/Foundation.h>


@interface GDMockCNFetchResult : NSObject

@property (readonly, copy, nonatomic) NSData *currentHistoryToken; // ivar: _currentHistoryToken
@property (readonly, nonatomic) id *value; // ivar: _value


-(id)fetchResult;
-(id)initWithValue:(id)arg0 currentHistoryToken:(id)arg1 ;


@end


#endif