// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DOCTAGLOCALSTORAGE_H
#define DOCTAGLOCALSTORAGE_H

@class NSOrderedSet, NSUserDefaults;

#import <Foundation/Foundation.h>


@interface DOCTagLocalStorage : NSObject

@property (retain, nonatomic) NSOrderedSet *discoveredTags;
@property (nonatomic) NSInteger tagSerialNumber;
@property (retain, nonatomic) NSUserDefaults *userDefaults; // ivar: _userDefaults
@property (retain, nonatomic) NSOrderedSet *userTags;


+(id)sharedAppGroupStorage;
-(id)_unarchivedTagsFromData:(id)arg0 ;
-(id)init;


@end


#endif