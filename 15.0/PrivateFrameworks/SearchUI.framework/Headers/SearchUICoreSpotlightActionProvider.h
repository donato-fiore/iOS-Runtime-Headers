// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SEARCHUICORESPOTLIGHTACTIONPROVIDER_H
#define SEARCHUICORESPOTLIGHTACTIONPROVIDER_H

@class SFOpenCoreSpotlightItemCommand;


#import "SearchUIActionProvider.h"

@interface SearchUICoreSpotlightActionProvider : SearchUIActionProvider

@property (readonly, nonatomic) SFOpenCoreSpotlightItemCommand *command;


-(id)customMenuElements;
-(id)itemProvider;
-(id)itemProviderFileTypes;
-(void)fetchFileURLForFileType:(id)arg0 completion:(id)arg1 ;
-(void)fetchShareableURL:(id)arg0 ;


@end


#endif