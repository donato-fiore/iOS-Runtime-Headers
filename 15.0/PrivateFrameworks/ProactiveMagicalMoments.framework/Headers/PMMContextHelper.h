// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PMMCONTEXTHELPER_H
#define PMMCONTEXTHELPER_H

@protocol _CDLocalContext;

#import <Foundation/Foundation.h>


@interface PMMContextHelper : NSObject

@property (readonly, nonatomic) NSObject<_CDLocalContext> *context; // ivar: _context


+(id)sharedInstance;
-(id)fetchContextValueForKeyPath:(id)arg0 ;
-(id)fetchDataDictionaryForKeyPath:(id)arg0 ;
-(id)init;
-(void)registerForNotifications:(id)arg0 ;


@end


#endif