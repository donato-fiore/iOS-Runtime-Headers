// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC13CDMFOUNDATION23CDMNLV4OVERRIDEDATABASE_H
#define _TTC13CDMFOUNDATION23CDMNLV4OVERRIDEDATABASE_H


#import <Foundation/Foundation.h>


@interface _TtC13CDMFoundation23CDMNLv4OverrideDatabase : NSObject {
    ? store;
}




-(BOOL)isTrieBacked;
-(BOOL)setupWithLanguageCode:(id)arg0 filePath:(id)arg1 ;
-(id)init;
-(id)initWithTrieFilePath:(id)arg0 ;
-(id)matchWithInputs:(id)arg0 ;
-(id)matchWithInputs:(id)arg0 shouldAppend:(*BOOL)arg1 ;


@end


#endif