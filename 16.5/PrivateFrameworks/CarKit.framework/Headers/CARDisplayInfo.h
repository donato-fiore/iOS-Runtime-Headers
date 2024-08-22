// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CARDISPLAYINFO_H
#define CARDISPLAYINFO_H

@class NSString, NSArray, NSSet;

#import <Foundation/Foundation.h>


@interface CARDisplayInfo : NSObject

@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSArray *oemPunchThroughs; // ivar: _oemPunchThroughs
@property (readonly, nonatomic) CGSize physicalSize; // ivar: _physicalSize
@property (readonly, nonatomic) CGSize pixelSize; // ivar: _pixelSize
@property (readonly, nonatomic) NSSet *punchThroughIdentifiers;
@property (readonly, nonatomic) NSArray *streams; // ivar: _streams
@property (readonly, nonatomic) BOOL supportsCarPlayContent; // ivar: _supportsCarPlayContent
@property (readonly, nonatomic) BOOL supportsInstrumentClusterContent; // ivar: _supportsInstrumentClusterContent
@property (readonly, nonatomic) BOOL supportsMapContent; // ivar: _supportsMapContent


-(BOOL)hasPunchThroughWithIdentifier:(id)arg0 ;
-(id)description;
-(id)initWithLogicalScreenDictionary:(id)arg0 ;
-(id)initWithPhysicalScreenDictionary:(id)arg0 ;
-(id)punchThroughWithIdentifier:(id)arg0 ;
-(struct CGPoint )originForScreenInfoIdentifier:(id)arg0 ;
-(void)_updateOEMViews:(id)arg0 ;
-(void)updateStreams:(id)arg0 ;


@end


#endif