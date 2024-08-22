// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SRSENSORWRITERKEYBOARDDELEGATE_H
#define SRSENSORWRITERKEYBOARDDELEGATE_H

@class NSString;
@protocol SRSensorWriterDelegate;

#import <Foundation/Foundation.h>


@interface SRSensorWriterKeyboardDelegate : NSObject <SRSensorWriterDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)classNameForSensorIdentifier:(id)arg0 ;


@end


#endif