// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UNSKEYEDDICTIONARYREPOSITORY_H
#define UNSKEYEDDICTIONARYREPOSITORY_H

@class NSString;

#import <Foundation/Foundation.h>

#import "UNSBundleLibrarian.h"

@interface UNSKeyedDictionaryRepository : NSObject {
    NSString *_directory;
    NSString *_fileName;
    NSString *_pathExtension;
    UNSBundleLibrarian *_librarian;
}




-(BOOL)_saveDictionary:(id)arg0 atPath:(id)arg1 ;
-(id)_dataAtPath:(id)arg0 ;
-(id)_dictionaryAtPath:(id)arg0 ;
-(id)_directoryForKey:(id)arg0 ;
-(id)_pathForKey:(id)arg0 ;
-(id)allKeys;
-(id)dictionaryForKey:(id)arg0 ;
-(id)initWithDirectory:(id)arg0 fileName:(id)arg1 pathExtension:(id)arg2 librarian:(id)arg3 ;
-(void)_removeDictionaryAtPath:(id)arg0 ;
-(void)removeDictionaryForKey:(id)arg0 ;
-(void)setDictionary:(id)arg0 forKey:(id)arg1 ;


@end


#endif