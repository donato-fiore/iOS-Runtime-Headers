// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HRFEATUREREGULATORYVERSIONITEM_H
#define HRFEATUREREGULATORYVERSIONITEM_H

@class NSString, NSAttributedString;
@protocol HRFeatureRegulatoryPanelDisplayable;

#import <Foundation/Foundation.h>


@interface HRFeatureRegulatoryVersionItem : NSObject <HRFeatureRegulatoryPanelDisplayable>

 {
    NSString *_productName;
    NSInteger _deviceType;
}


@property (readonly, nonatomic) NSInteger cellAccessoryType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isInteractive;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSAttributedString *titleString;
@property (readonly, copy, nonatomic) NSAttributedString *valueString;


-(id)initWithProductName:(id)arg0 deviceType:(NSInteger)arg1 ;
-(id)shortVersionNumberFromString:(id)arg0 ;


@end


#endif