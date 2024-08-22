// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC7NOTESUIP33_38DEFBB06AD9C3AADDDE63B28766BA9312ICTITLEQUERY_H
#define _TTC7NOTESUIP33_38DEFBB06AD9C3AADDDE63B28766BA9312ICTITLEQUERY_H

@class PKTitleQuery;
@protocol PKTitleQueryDelegate;



@interface _TtC7NotesUIP33_38DEFBB06AD9C3AADDDE63B28766BA9312ICTitleQuery : PKTitleQuery <PKTitleQueryDelegate>

 {
    ? drawingUUID;
    ? attachment;
}




-(id)init;
-(id)initWithDrawing:(id)arg0 ;
-(void)titleQuery:(id)arg0 didUpdateWithItem:(id)arg1 ;


@end


#endif