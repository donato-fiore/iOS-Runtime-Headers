// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SHINSIGHTSDATASTREAMOUTPUT_H
#define SHINSIGHTSDATASTREAMOUTPUT_H

@class NSString, NSOutputStream;
@protocol SHInsightsDataStream;

#import <Foundation/Foundation.h>


@interface SHInsightsDataStreamOutput : NSObject <SHInsightsDataStream>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<SHInsightsDataStream> *next; // ivar: _next
@property (retain, nonatomic) NSOutputStream *outputStream; // ivar: _outputStream
@property (readonly) Class superclass;


-(BOOL)closeWithError:(*id)arg0 ;
-(BOOL)processData:(id)arg0 error:(*id)arg1 ;
-(id)initWithDestination:(id)arg0 ;
-(void)dealloc;


@end


#endif