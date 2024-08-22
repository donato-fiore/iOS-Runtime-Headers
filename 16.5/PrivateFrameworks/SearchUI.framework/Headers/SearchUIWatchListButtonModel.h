// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SEARCHUIWATCHLISTBUTTONMODEL_H
#define SEARCHUIWATCHLISTBUTTONMODEL_H

@class NSURL, NSString, SFImage;

#import <Foundation/Foundation.h>

#import "SearchUIWatchListState.h"

@interface SearchUIWatchListButtonModel : NSObject

@property NSUInteger buttonType; // ivar: _buttonType
@property (retain) NSURL *punchoutURL; // ivar: _punchoutURL
@property (retain) NSString *storeIdentifier; // ivar: _storeIdentifier
@property (retain) NSString *subtitle; // ivar: _subtitle
@property (retain) SFImage *thumbnailImage; // ivar: _thumbnailImage
@property (retain) NSString *title; // ivar: _title
@property (retain) SearchUIWatchListState *watchListState; // ivar: _watchListState




@end


#endif