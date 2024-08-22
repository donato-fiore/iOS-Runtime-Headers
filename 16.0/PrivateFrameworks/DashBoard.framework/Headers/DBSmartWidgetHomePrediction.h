// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DBSMARTWIDGETHOMEPREDICTION_H
#define DBSMARTWIDGETHOMEPREDICTION_H

@class NSString;
@protocol DBGarageDoorObserver;


#import "DBSmartWidgetPrediction.h"
#import "DBGarageDoor.h"

@interface DBSmartWidgetHomePrediction : DBSmartWidgetPrediction <DBGarageDoorObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) DBGarageDoor *garageDoor; // ivar: _garageDoor
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(CGFloat)maxValue;
+(CGFloat)minValue;
+(NSInteger)baseScore;
+(id)_imageNamed:(id)arg0 onBackgroundColor:(id)arg1 ;
+(id)closedGarageDoor;
+(id)openGarageDoor;
+(void)resetImages;
-(BOOL)showImageBorder;
-(BOOL)updateWithPrediction:(id)arg0 ;
-(CGFloat)value;
-(NSInteger)_iconType;
-(NSInteger)tieBreakScore;
-(id)actionBlock:(SEL)arg0 ;
-(id)compositingFilter;
-(id)debugScoreText;
-(id)image;
-(id)initWithGarageDoor:(id)arg0 ;
-(id)predictedObject;
-(id)subtitle;
-(id)title;
-(id)uniqueIdentifier;
-(void)garageDoor:(id)arg0 didUpdateDoorState:(NSInteger)arg1 ;
-(void)garageDoor:(id)arg0 didUpdateObstructionDetected:(BOOL)arg1 ;
-(void)garageDoor:(id)arg0 didUpdateTargetDoorState:(NSInteger)arg1 ;
-(void)serviceDidUpdate:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif