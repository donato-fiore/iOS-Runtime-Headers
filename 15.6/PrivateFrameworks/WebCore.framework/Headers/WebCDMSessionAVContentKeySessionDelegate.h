// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WEBCDMSESSIONAVCONTENTKEYSESSIONDELEGATE_H
#define WEBCDMSESSIONAVCONTENTKEYSESSIONDELEGATE_H

@class NSString;
@protocol AVContentKeySessionDelegate;

#import <Foundation/Foundation.h>


@interface WebCDMSessionAVContentKeySessionDelegate : NSObject <AVContentKeySessionDelegate>

 {
    *void m_parent;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithParent:(*void)arg0 ;
-(void)contentKeySession:(id)arg0 didProvideContentKeyRequest:(id)arg1 ;
-(void)contentKeySessionContentProtectionSessionIdentifierDidChange:(id)arg0 ;
-(void)invalidate;


@end


#endif