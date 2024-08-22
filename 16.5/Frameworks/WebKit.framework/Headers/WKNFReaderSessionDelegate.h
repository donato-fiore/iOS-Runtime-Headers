// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WKNFREADERSESSIONDELEGATE_H
#define WKNFREADERSESSIONDELEGATE_H

@class NSString;
@protocol NFReaderSessionDelegate;

#import <Foundation/Foundation.h>


@interface WKNFReaderSessionDelegate : NSObject <NFReaderSessionDelegate>

 {
    WeakPtr<WebKit::NfcConnection, WTF::DefaultWeakPtrImpl> _connection;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithConnection:(*void)arg0 ;
-(void)readerSession:(id)arg0 didDetectTags:(id)arg1 ;


@end


#endif