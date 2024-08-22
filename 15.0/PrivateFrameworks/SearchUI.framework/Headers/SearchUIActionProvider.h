// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SEARCHUIACTIONPROVIDER_H
#define SEARCHUIACTIONPROVIDER_H

@class SFCommand, UIActivityViewController, NSItemProvider, UIMenu;

#import <Foundation/Foundation.h>

#import "SearchUICommandEnvironment.h"
#import "SearchUIRowModel.h"

@interface SearchUIActionProvider : NSObject

@property (readonly, nonatomic) SFCommand *command; // ivar: _command
@property (retain, nonatomic) UIActivityViewController *controller; // ivar: _controller
@property (readonly) SearchUICommandEnvironment *environment; // ivar: _environment
@property (readonly, nonatomic) NSItemProvider *itemProvider; // ivar: _itemProvider
@property (readonly) UIMenu *menu; // ivar: _menu
@property (readonly, nonatomic) SearchUIRowModel *rowModel; // ivar: _rowModel
@property (readonly, nonatomic) BOOL supportsCopy;
@property (readonly, nonatomic) BOOL supportsShare;


+(id)actionProviderForPreviewButtons:(id)arg0 title:(id)arg1 commandEnvironment:(id)arg2 ;
+(id)actionProviderForRowModel:(id)arg0 command:(id)arg1 commandEnvironment:(id)arg2 ;
-(id)customActivityViewController;
-(id)initWithPreviewButtons:(id)arg0 title:(id)arg1 commandEnvironment:(id)arg2 ;
-(id)initWithRowModel:(id)arg0 command:(id)arg1 commandEnivornment:(id)arg2 ;
-(void)fetchShareableURL:(id)arg0 ;


@end


#endif