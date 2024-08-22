// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WEBOPENPANELRESULTLISTENER_H
#define WEBOPENPANELRESULTLISTENER_H

@class NSString;
@protocol WebOpenPanelResultListener;

#import <Foundation/Foundation.h>


@interface WebOpenPanelResultListener : NSObject <WebOpenPanelResultListener>

 {
    RefPtr<WebCore::FileChooser, WTF::RawPtrTraits<WebCore::FileChooser>, WTF::DefaultRefDerefTraits<WebCore::FileChooser>> _chooser;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithChooser:(*void)arg0 ;
-(void)cancel;
-(void)chooseFilename:(id)arg0 ;
-(void)chooseFilename:(id)arg0 displayString:(id)arg1 iconImage:(struct CGImage *)arg2 ;
-(void)chooseFilenames:(id)arg0 ;
-(void)chooseFilenames:(id)arg0 displayString:(id)arg1 iconImage:(struct CGImage *)arg2 ;


@end


#endif