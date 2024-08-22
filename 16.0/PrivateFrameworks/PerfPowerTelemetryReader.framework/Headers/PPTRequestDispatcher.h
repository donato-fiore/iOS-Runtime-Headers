// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPTREQUESTDISPATCHER_H
#define PPTREQUESTDISPATCHER_H

@class NSString;
@protocol PPTDataReaderProtocol;

#import <Foundation/Foundation.h>


@interface PPTRequestDispatcher : NSObject <PPTDataReaderProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *metadataFilepath; // ivar: _metadataFilepath
@property (copy, nonatomic) NSString *storageFilepath; // ivar: _storageFilepath
@property (readonly) Class superclass;


+(id)sharedInstance;
-(NSInteger)_readerTypeForSubsystem:(id)arg0 category:(id)arg1 ;
-(id)_executeRequest:(id)arg0 withError:(*id)arg1 ;
-(id)dataForRequest:(id)arg0 withError:(*id)arg1 ;


@end


#endif