// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSPASSWORDWORDLISTENTRY_H
#define WBSPASSWORDWORDLISTENTRY_H

@class NSString;

#import <Foundation/Foundation.h>


@interface WBSPasswordWordListEntry : NSObject

@property (readonly, nonatomic) NSUInteger guessesRequired; // ivar: _guessesRequired
@property (readonly, nonatomic, getter=isSensitive) BOOL sensitive; // ivar: _sensitive
@property (readonly, copy, nonatomic) NSString *word; // ivar: _word
@property (readonly, copy, nonatomic) NSString *wordListIdentifier; // ivar: _wordListIdentifier


-(id)description;
-(id)initWithWord:(id)arg0 isSensitive:(BOOL)arg1 wordListIdentifier:(id)arg2 guessesRequired:(NSUInteger)arg3 ;


@end


#endif