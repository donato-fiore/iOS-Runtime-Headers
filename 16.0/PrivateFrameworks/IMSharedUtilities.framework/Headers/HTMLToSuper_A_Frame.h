// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HTMLTOSUPER_A_FRAME_H
#define HTMLTOSUPER_A_FRAME_H

@class Frame;



@interface HTMLToSuper_A_Frame : Frame {
    BOOL _shouldPopLink;
}




-(void)parser:(id)arg0 context:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 ;
-(void)parser:(id)arg0 context:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;


@end


#endif