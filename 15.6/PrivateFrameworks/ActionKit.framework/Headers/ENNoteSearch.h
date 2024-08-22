// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ENNOTESEARCH_H
#define ENNOTESEARCH_H

@class NSString;

#import <Foundation/Foundation.h>


@interface ENNoteSearch : NSObject

@property (retain, nonatomic) NSString *searchString; // ivar: _searchString


+(id)noteSearchCreatedByThisApplication;
+(id)noteSearchWithSearchString:(id)arg0 ;
-(id)init;
-(id)initWithSearchString:(id)arg0 ;


@end


#endif