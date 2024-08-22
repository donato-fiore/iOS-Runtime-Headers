// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STOCKSPREFERENCES_H
#define STOCKSPREFERENCES_H

@class NSUserDefaults;

#import <Foundation/Foundation.h>


@interface StocksPreferences : NSObject {
    NSUserDefaults *_sharedDefaults;
}


@property (readonly, nonatomic, getter=isChangeColorSwapped) BOOL changeColorSwapped; // ivar: _changeColorSwapped
@property (readonly, nonatomic) BOOL textAttachmentDirectionIsRightToLeft; // ivar: _textAttachmentDirectionIsRightToLeft
@property (readonly, nonatomic) NSUInteger textDirection; // ivar: _textDirection


+(id)sharedPreferences;
+(void)clearSharedPreferences;
-(BOOL)boolForKey:(id)arg0 ;
-(NSInteger)integerForKey:(id)arg0 ;
-(id)init;
-(id)objectForKey:(id)arg0 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(id)stringForKey:(id)arg0 ;
-(void)removeObjectForKey:(id)arg0 ;
-(void)resetLocale;
-(void)setInteger:(NSInteger)arg0 forKey:(id)arg1 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;
-(void)setObject:(id)arg0 forKeyedSubscript:(id)arg1 ;
-(void)synchronize;


@end


#endif