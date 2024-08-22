// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SEARCHUITRACKLAYOUTMANAGER_H
#define SEARCHUITRACKLAYOUTMANAGER_H

@class TLKGridLayoutManager, NSMapTable;

#import <Foundation/Foundation.h>


@interface SearchUITrackLayoutManager : NSObject

@property (retain, nonatomic) TLKGridLayoutManager *layoutManager; // ivar: _layoutManager
@property (retain, nonatomic) NSMapTable *tableMapping; // ivar: _tableMapping


+(id)singleLineTextWithString:(id)arg0 highlighted:(BOOL)arg1 ;
-(id)initWithTrackCardSection:(id)arg0 ;
-(id)tableRowForTrack:(id)arg0 ;


@end


#endif