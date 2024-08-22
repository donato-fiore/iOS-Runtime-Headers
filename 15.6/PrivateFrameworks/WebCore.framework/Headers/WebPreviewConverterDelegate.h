// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WEBPREVIEWCONVERTERDELEGATE_H
#define WEBPREVIEWCONVERTERDELEGATE_H


#import <Foundation/Foundation.h>


@interface WebPreviewConverterDelegate : NSObject {
    WeakPtr<WebCore::PreviewPlatformDelegate, WTF::EmptyCounter> _delegate;
}




-(id)initWithDelegate:(*void)arg0 ;
-(void)connection:(id)arg0 didFailWithError:(id)arg1 ;
-(void)connection:(id)arg0 didReceiveData:(id)arg1 lengthReceived:(NSInteger)arg2 ;
-(void)connectionDidFinishLoading:(id)arg0 ;


@end


#endif