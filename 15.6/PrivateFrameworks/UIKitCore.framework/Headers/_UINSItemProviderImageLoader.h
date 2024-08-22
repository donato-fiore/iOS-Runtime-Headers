// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UINSITEMPROVIDERIMAGELOADER_H
#define _UINSITEMPROVIDERIMAGELOADER_H

@class UIImageLoader, NSItemProvider, NSString, NSProgress;



@interface _UINSItemProviderImageLoader : UIImageLoader {
    NSItemProvider *_itemProvider;
    NSString *_typeIdentifier;
}


@property (retain, setter=_setProgress:) NSProgress *_progress; // ivar: __progress


-(BOOL)_really_cancel;
-(id)initWithItemProvider:(id)arg0 typeIdentifier:(id)arg1 ;
-(void)_really_loadImage:(id)arg0 ;


@end


#endif