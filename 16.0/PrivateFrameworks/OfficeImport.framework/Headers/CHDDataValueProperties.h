// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHDDATAVALUEPROPERTIES_H
#define CHDDATAVALUEPROPERTIES_H

@class NSString;
@protocol EDKeyedObject;

#import <Foundation/Foundation.h>

#import "CHDDataLabel.h"
#import "CHDMarker.h"
#import "OADGraphicProperties.h"

@interface CHDDataValueProperties : NSObject <EDKeyedObject>

 {
    CHDDataLabel *mDataLabel;
    CHDMarker *mMarker;
    NSUInteger mDataValueIndex;
    OADGraphicProperties *mGraphicProperties;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)dataValueProperties;
-(NSInteger)key;
-(NSUInteger)dataValueIndex;
-(id)dataLabel;
-(id)graphicProperties;
-(id)init;
-(id)marker;
-(id)shallowCopyWithIndex:(NSUInteger)arg0 ;
-(void)setDataLabel:(id)arg0 ;
-(void)setDataValueIndex:(NSUInteger)arg0 ;
-(void)setGraphicProperties:(id)arg0 ;
-(void)setMarker:(id)arg0 ;


@end


#endif