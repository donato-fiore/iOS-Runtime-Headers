// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SEARCHUIFILESACTIONPROVIDER_H
#define SEARCHUIFILESACTIONPROVIDER_H

@class SFOpenFileProviderItemCommand, NSURL, NSString;


#import "SearchUIActionProvider.h"

@interface SearchUIFilesActionProvider : SearchUIActionProvider

@property (readonly, nonatomic) SFOpenFileProviderItemCommand *command;
@property (retain, nonatomic) NSURL *fileURL; // ivar: _fileURL
@property (retain, nonatomic) NSString *utiType; // ivar: _utiType


-(id)itemProvider;
-(void)fetchShareableURL:(id)arg0 ;


@end


#endif