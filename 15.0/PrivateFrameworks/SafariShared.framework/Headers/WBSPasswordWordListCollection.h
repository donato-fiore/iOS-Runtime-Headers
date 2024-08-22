// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSPASSWORDWORDLISTCOLLECTION_H
#define WBSPASSWORDWORDLISTCOLLECTION_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface WBSPasswordWordListCollection : NSObject {
    NSMutableDictionary *_wordListsByIdentifiers;
}




+(id)commonPasscodeWordListCollection;
+(id)commonPasswordWordListCollection;
-(id)entriesForString:(id)arg0 ;
-(id)init;
-(void)addWordList:(id)arg0 ;
-(void)enumerateEntriesForString:(id)arg0 withBlock:(id)arg1 ;


@end


#endif