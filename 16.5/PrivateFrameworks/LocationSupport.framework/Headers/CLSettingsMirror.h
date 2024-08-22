// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLSETTINGSMIRROR_H
#define CLSETTINGSMIRROR_H

@class NSString;
@protocol CLSettingsManagerClientProtocol, CLSettingsManagerProtocol;


#import "CLSettingsDictionary.h"
#import "CLIntersiloUniverse.h"

@interface CLSettingsMirror : CLSettingsDictionary <CLSettingsManagerClientProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<CLSettingsManagerProtocol> *manager; // ivar: _manager
@property (copy, nonatomic) id *settingsChangeHandler; // ivar: _settingsChangeHandler
@property (readonly) Class superclass;
@property (retain, nonatomic) CLIntersiloUniverse *universe; // ivar: _universe
@property (nonatomic) BOOL valid; // ivar: _valid


-(id)initInUniverse:(id)arg0 ;
-(void)dealloc;
-(void)didUpdateSettings:(id)arg0 ;
-(void)setArray:(id)arg0 forKey:(id)arg1 ;
-(void)setBool:(BOOL)arg0 forKey:(id)arg1 ;
-(void)setDictionary:(id)arg0 forKey:(id)arg1 ;
-(void)setDouble:(CGFloat)arg0 forKey:(id)arg1 ;
-(void)setFloat:(float)arg0 forKey:(id)arg1 ;
-(void)setInt:(int)arg0 forKey:(id)arg1 ;
-(void)setLong:(NSInteger)arg0 forKey:(id)arg1 ;
-(void)setShort:(short)arg0 forKey:(id)arg1 ;
-(void)setString:(id)arg0 forKey:(id)arg1 ;
-(void)setValue:(id)arg0 forKey:(id)arg1 ;


@end


#endif