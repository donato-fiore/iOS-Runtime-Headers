// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFSYNTHETICBOOKMARKFOLDER_H
#define SFSYNTHETICBOOKMARKFOLDER_H

@class WebBookmarkList, NSString;

#import <Foundation/Foundation.h>


@interface SFSyntheticBookmarkFolder : NSObject

@property (retain, nonatomic) WebBookmarkList *bookmarkList; // ivar: _bookmarkList
@property (copy, nonatomic) NSString *title; // ivar: _title


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithBookmarkList:(id)arg0 title:(id)arg1 ;


@end


#endif