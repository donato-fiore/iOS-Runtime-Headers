// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DRSREQUESTSTATS_H
#define DRSREQUESTSTATS_H

@class NSMutableDictionary, NSMutableArray, NSDictionary, NSString, NSArray;

#import <Foundation/Foundation.h>


@interface DRSRequestStats : NSObject

@property (readonly, nonatomic) NSMutableDictionary *_childStats; // ivar: __childStats
@property (readonly, nonatomic) NSMutableArray *_requests; // ivar: __requests
@property (readonly, nonatomic) NSDictionary *childStats;
@property (readonly, nonatomic) NSString *descriptionString; // ivar: _descriptionString
@property (readonly, nonatomic) NSUInteger logSizeBytes;
@property (readonly, nonatomic) NSUInteger requestCount;
@property (readonly, nonatomic) NSArray *requests;


+(id)descriptionStringForChildStats:(id)arg0 ;
+(id)descriptionStringForRequest:(id)arg0 ;
+(id)keyName;
-(BOOL)addRequest:(id)arg0 ;
-(id)_debugDescription:(NSUInteger)arg0 ;
-(id)debugDescription;
-(id)initWithDescriptionString:(id)arg0 ;
-(void)_addChildRequest:(id)arg0 ;


@end


#endif