// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FSFCURAREINTERACTIONSTREAM_H
#define FSFCURAREINTERACTIONSTREAM_H

@class NSString;
@protocol FSFStreamSourceProtocol;

#import <Foundation/Foundation.h>


@interface FSFCurareInteractionStream : NSObject <FSFStreamSourceProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<FSFStreamSourceProtocol> *stream; // ivar: _stream
@property (readonly) Class superclass;


+(id)eventFilterForEventTypes:(id)arg0 ;
+(id)getWithStreamId:(id)arg0 ;
+(id)getWithStreamId:(id)arg0 sourceType:(NSUInteger)arg1 ;
-(BOOL)deleteCurrentStream;
-(BOOL)insert:(id)arg0 error:(*id)arg1 ;
-(id)initWithStreamId:(id)arg0 ;
-(id)initWithStreamId:(id)arg0 sourceType:(NSUInteger)arg1 ;
-(id)retrieve:(id)arg0 ;
-(void)retrieve:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif