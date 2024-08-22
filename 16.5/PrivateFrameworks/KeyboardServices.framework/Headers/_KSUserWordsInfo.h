// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _KSUSERWORDSINFO_H
#define _KSUSERWORDSINFO_H

@class NSDate;

#import <Foundation/Foundation.h>

#import "_KSFileEntry.h"

@interface _KSUserWordsInfo : NSObject {
    NSDate *_modifiedDate;
    NSUInteger _size;
    _KSFileEntry *_file;
}




+(id)filesForLanguage:(id)arg0 ;
+(id)infoWithFiles:(id)arg0 ;
+(id)infoWithRecord:(id)arg0 ;
+(id)keyForData;
+(id)keyNamesExcludingData;
+(id)keyboardDirectory;
-(BOOL)isBetterThan:(id)arg0 ;
-(id)description;
-(id)initWithFiles:(id)arg0 ;
-(id)initWithRecord:(id)arg0 ;
-(void)saveToRecord:(id)arg0 ;


@end


#endif