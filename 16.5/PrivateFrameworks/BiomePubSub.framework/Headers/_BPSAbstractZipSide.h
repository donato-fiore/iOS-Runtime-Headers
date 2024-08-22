// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _BPSABSTRACTZIPSIDE_H
#define _BPSABSTRACTZIPSIDE_H

@class NSString;
@protocol BPSSubscriber;

#import <Foundation/Foundation.h>

#import "_BPSAbstractZip.h"

@interface _BPSAbstractZipSide : NSObject <BPSSubscriber>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger index; // ivar: _index
@property (readonly) Class superclass;
@property (retain, nonatomic) _BPSAbstractZip *zip; // ivar: _zip


-(NSInteger)receiveInput:(id)arg0 ;
-(id)initWithIndex:(NSInteger)arg0 zip:(id)arg1 ;
-(void)cancel;
-(void)receiveCompletion:(id)arg0 ;
-(void)receiveSubscription:(id)arg0 ;


@end


#endif