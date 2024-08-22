// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CATLOCALIZATIONHELPER_H
#define CATLOCALIZATIONHELPER_H

@class NSMutableDictionary, NSLock, NSBundle;

#import <Foundation/Foundation.h>


@interface CATLocalizationHelper : NSObject {
    NSMutableDictionary *mStringByKeyByTableName;
    NSLock *mLock;
}


@property (readonly, weak, nonatomic) NSBundle *bundle; // ivar: _bundle


+(id)helperForBundle:(id)arg0 ;
-(id)initWithBundle:(id)arg0 ;
-(id)stringByKeyForTableName:(id)arg0 ;
-(id)stringsForKey:(id)arg0 value:(id)arg1 table:(id)arg2 ;


@end


#endif