// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef THACONTROLLER_H
#define THACONTROLLER_H

@class NSString, NSSet;

#import <Foundation/Foundation.h>


@interface THAController : NSObject

@property (nonatomic) BOOL connected; // ivar: _connected
@property (readonly, nonatomic) unsigned int identifier; // ivar: _identifier
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) BOOL selected; // ivar: _selected
@property (retain, nonatomic) NSSet *selectedButtons; // ivar: _selectedButtons
@property (nonatomic) BOOL supportsSiri; // ivar: _supportsSiri
@property (nonatomic) NSUInteger ticksPerSecond; // ivar: _ticksPerSecond


+(id)selectButtonConfiguration:(id)arg0 supportsSiri:(BOOL)arg1 ;
-(BOOL)dispatchButtonEvent:(id)arg0 ;
-(id)initWithName:(id)arg0 identifier:(unsigned int)arg1 ticksPerSecond:(NSUInteger)arg2 supportedButtons:(id)arg3 supportsSiri:(BOOL)arg4 ;
-(void)updateSelectedButtons:(id)arg0 ;


@end


#endif