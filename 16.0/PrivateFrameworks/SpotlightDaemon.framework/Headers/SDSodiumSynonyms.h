// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SDSODIUMSYNONYMS_H
#define SDSODIUMSYNONYMS_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface SDSodiumSynonyms : NSObject {
    NSDictionary *synonymDictionary;
}




-(BOOL)_loadSynonymsFromFile:(id)arg0 error:(*id)arg1 ;
-(id)_cleanWord:(id)arg0 unacceptableCharSet:(id)arg1 ;
-(id)getSynonymsForWord:(id)arg0 ;
-(id)init;
-(void)loadSynonymDictionary;


@end


#endif