// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC7SWIFTUI16PLATFORMDOCUMENT_H
#define _TTC7SWIFTUI16PLATFORMDOCUMENT_H

@class UIDocument;



@interface _TtC7SwiftUI16PlatformDocument : UIDocument {
    ? documentBox;
    ? notificationObserver;
}




-(BOOL)readFromURL:(id)arg0 error:(*id)arg1 ;
-(id)contentsForType:(id)arg0 error:(*id)arg1 ;
-(id)initWithFileURL:(id)arg0 ;
-(void)dealloc;


@end


#endif