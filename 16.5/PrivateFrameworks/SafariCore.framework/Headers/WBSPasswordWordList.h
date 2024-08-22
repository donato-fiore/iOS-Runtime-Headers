// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSPASSWORDWORDLIST_H
#define WBSPASSWORDWORDLIST_H

@class NSString;

#import <Foundation/Foundation.h>


@interface WBSPasswordWordList : NSObject

@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier


-(id)entriesForString:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(void)enumerateEntriesForString:(id)arg0 withBlock:(id)arg1 ;


@end


#endif