// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LANVRAM_H
#define LANVRAM_H


#import <Foundation/Foundation.h>


@interface LANVRAM : NSObject



+(id)sharedInstance;
-(BOOL)boolForKey:(id)arg0 ;
-(BOOL)setData:(id)arg0 forKey:(id)arg1 ;
-(BOOL)setString:(id)arg0 forKey:(id)arg1 ;
-(NSUInteger)unsignedLongLongForKey:(id)arg0 ;
-(id)dataForKey:(id)arg0 ;
-(id)dataForKey:(id)arg0 namespace:(id)arg1 ;
-(id)stringForKey:(id)arg0 ;
-(unsigned char)byteForKey:(id)arg0 ;
-(unsigned int)unsignedIntForKey:(id)arg0 ;


@end


#endif