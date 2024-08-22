// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LIVEFSFPTRASHOBSERVER_H
#define LIVEFSFPTRASHOBSERVER_H

@class NSString, NSMutableArray, NSData;
@protocol NSFileProviderEnumerationObserver;

#import <Foundation/Foundation.h>


@interface LiveFSFPTrashObserver : NSObject <NSFileProviderEnumerationObserver>



@property (copy) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSMutableArray *items; // ivar: _items
@property (readonly, retain) NSData *lastPage; // ivar: _lastPage
@property (readonly, nonatomic) NSInteger suggestedPageSize;
@property (readonly) Class superclass;


+(id)newWithCompletionHandler:(id)arg0 ;
-(id)initWithCompletionHandler:(id)arg0 ;
-(void)didEnumerateItems:(id)arg0 ;
-(void)finishEnumeratingUpToPage:(id)arg0 ;
-(void)finishEnumeratingWithError:(id)arg0 ;


@end


#endif