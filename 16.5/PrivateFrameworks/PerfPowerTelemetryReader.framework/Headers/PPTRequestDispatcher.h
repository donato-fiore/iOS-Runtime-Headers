// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPTREQUESTDISPATCHER_H
#define PPTREQUESTDISPATCHER_H

@class NSString, NSURL;
@protocol PPTDataReaderProtocol;

#import <Foundation/Foundation.h>


@interface PPTRequestDispatcher : NSObject <PPTDataReaderProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSURL *filepath; // ivar: _filepath
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)_readerTypeForSubsystem:(id)arg0 category:(id)arg1 ;
-(id)_executeRequest:(id)arg0 withError:(*id)arg1 ;
-(id)dataForRequest:(id)arg0 withError:(*id)arg1 ;
-(id)initWithFilepath:(id)arg0 ;


@end


#endif