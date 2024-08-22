// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SHINSIGHTSDATASTREAMINPUT_H
#define SHINSIGHTSDATASTREAMINPUT_H

@class NSString;
@protocol SHInsightsDataStream;

#import <Foundation/Foundation.h>


@interface SHInsightsDataStreamInput : NSObject <SHInsightsDataStream>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<SHInsightsDataStream> *next; // ivar: _next
@property (readonly) Class superclass;


-(BOOL)closeWithError:(*id)arg0 ;
-(BOOL)loadDataFromURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)processData:(id)arg0 error:(*id)arg1 ;
-(BOOL)readFromURL:(id)arg0 toStream:(id)arg1 error:(*id)arg2 ;


@end


#endif