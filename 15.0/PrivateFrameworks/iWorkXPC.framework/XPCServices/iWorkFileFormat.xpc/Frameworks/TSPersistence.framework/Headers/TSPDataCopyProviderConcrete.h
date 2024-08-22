// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSPDATACOPYPROVIDERCONCRETE_H
#define TSPDATACOPYPROVIDERCONCRETE_H

@class NSURL, NSString, NSInputStream;
@protocol TSPDataCopyProvider, TSPDataCopyURLProvider, TSPDataCopyReadChannelProvider, TSPDataCopyInputSteamProvider, TSUReadChannel;

#import <Foundation/Foundation.h>


@interface TSPDataCopyProviderConcrete : NSObject <TSPDataCopyProvider, TSPDataCopyURLProvider, TSPDataCopyReadChannelProvider, TSPDataCopyInputSteamProvider>



@property (readonly, nonatomic) NSURL *URL;
@property (retain, nonatomic) NSURL *URLInternal; // ivar: _URLInternal
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSURL *directory; // ivar: _directory
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInputStream *inputStream;
@property (retain, nonatomic) NSInputStream *inputStreamInternal; // ivar: _inputStreamInternal
@property (readonly, nonatomic) NSObject<TSUReadChannel> *readChannel;
@property (retain, nonatomic) NSObject<TSUReadChannel> *readChannelInternal; // ivar: _readChannelInternal
@property (readonly) Class superclass;


-(id)initWithDocumentURL:(id)arg0 error:(*id)arg1 ;
-(id)inputStreamForRange:(struct _NSRange )arg0 ;
-(void)cleanUp;


@end


#endif