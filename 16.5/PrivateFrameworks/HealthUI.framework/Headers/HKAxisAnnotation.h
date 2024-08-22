// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKAXISANNOTATION_H
#define HKAXISANNOTATION_H

@class NSAttributedString;

#import <Foundation/Foundation.h>


@interface HKAxisAnnotation : NSObject

@property (readonly, nonatomic) NSAttributedString *annotationText; // ivar: _annotationText
@property (readonly, nonatomic) id *position; // ivar: _position


-(id)initWithAnnotation:(id)arg0 position:(id)arg1 ;


@end


#endif