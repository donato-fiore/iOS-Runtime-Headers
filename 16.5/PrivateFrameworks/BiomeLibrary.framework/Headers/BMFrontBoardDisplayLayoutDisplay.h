// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMFRONTBOARDDISPLAYLAYOUTDISPLAY_H
#define BMFRONTBOARDDISPLAYLAYOUTDISPLAY_H

@class BMEventBase, NSString, NSArray;
@protocol BMStoreData;



@interface BMFrontBoardDisplayLayoutDisplay : BMEventBase <BMStoreData>



@property (readonly, nonatomic) int backlightStatus; // ivar: _backlightStatus
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *deviceName; // ivar: _deviceName
@property (readonly, nonatomic) NSArray *elements; // ivar: _elements
@property (readonly, nonatomic) NSString *hardwareIdentifier; // ivar: _hardwareIdentifier
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) int interfaceOrientation; // ivar: _interfaceOrientation
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *transitionReasons; // ivar: _transitionReasons
@property (readonly, nonatomic) int type; // ivar: _type


+(id)columns;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)validKeyPaths;
-(BOOL)isEqual:(id)arg0 ;
-(id)initByReadFrom:(id)arg0 ;
-(id)initWithJSONDictionary:(id)arg0 error:(*id)arg1 ;
-(id)initWithType:(int)arg0 name:(id)arg1 deviceName:(id)arg2 hardwareIdentifier:(id)arg3 interfaceOrientation:(int)arg4 backlightStatus:(int)arg5 elements:(id)arg6 transitionReasons:(id)arg7 ;
-(id)jsonDictionary;
-(id)serialize;
-(void)writeTo:(id)arg0 ;


@end


#endif