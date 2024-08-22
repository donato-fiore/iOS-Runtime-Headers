// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUDEFERREDUISEARCHFIELD_H
#define SUDEFERREDUISEARCHFIELD_H

@class UISearchField, NSString;
@protocol SUDeferredUIView;



@interface SUDeferredUISearchField : UISearchField <SUDeferredUIView>

 {
    NSInteger _deferredClearButtonMode;
    id *_deferredFont;
    CGRect _deferredFrame;
    float _deferredPaddingLeft;
    float _deferredPaddingTop;
    NSString *_deferredPlaceholder;
    NSString *_deferredText;
    BOOL _isDeferringInterfaceUpdates;
}


@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isDeferringInterfaceUpdates) BOOL deferringInterfaceUpdates;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)clearButtonMode;
-(float)paddingLeft;
-(float)paddingTop;
-(id)font;
-(id)placeholder;
-(id)text;
-(struct CGRect )frame;
-(void)_commitDeferredInterfaceUpdates;
-(void)_saveCurrentStateAsDeferred;
-(void)dealloc;
-(void)setClearButtonMode:(NSInteger)arg0 ;
-(void)setFont:(id)arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setPaddingTop:(float)arg0 paddingLeft:(float)arg1 ;
-(void)setPlaceholder:(id)arg0 ;
-(void)setText:(id)arg0 ;


@end


#endif