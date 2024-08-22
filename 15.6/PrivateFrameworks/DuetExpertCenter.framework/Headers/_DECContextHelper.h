// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DECCONTEXTHELPER_H
#define _DECCONTEXTHELPER_H

@protocol _CDLocalContext;

#import <Foundation/Foundation.h>


@interface _DECContextHelper : NSObject

@property (readonly, nonatomic) NSObject<_CDLocalContext> *context; // ivar: _context


+(id)sharedInstance;
-(id)fetchContextValueForKeyPath:(id)arg0 ;
-(id)fetchDataDictionaryForKeyPath:(id)arg0 ;
-(id)init;
-(void)registerForNotifications:(id)arg0 ;


@end


#endif