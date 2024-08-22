// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HLPREMOTEDATACONTROLLER_H
#define HLPREMOTEDATACONTROLLER_H

@class NSURL, NSDictionary;

#import <Foundation/Foundation.h>

#import "HLPURLSessionItem.h"

@interface HLPRemoteDataController : NSObject

@property (copy, nonatomic) NSURL *URL; // ivar: _URL
@property (retain, nonatomic) HLPURLSessionItem *URLSessionItem; // ivar: _URLSessionItem
@property (nonatomic) BOOL hasLoaded; // ivar: _hasLoaded
@property (retain, nonatomic) NSDictionary *headerFields; // ivar: _headerFields
@property (nonatomic) BOOL loading; // ivar: _loading


-(id)initWithURL:(id)arg0 ;
-(void)cancel;
-(void)clearData;
-(void)dealloc;
-(void)fetchDataWithDataType:(NSInteger)arg0 identifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)processData:(id)arg0 formattedData:(id)arg1 ;
-(void)processFileURLWithCompletionHandler:(id)arg0 ;


@end


#endif