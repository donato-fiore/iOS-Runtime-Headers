// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CMPROPERTY_H
#define CMPROPERTY_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CMProperty : NSObject {
    NSString *cachedCssString;
}




-(id)cachedCssStringForName:(id)arg0 ;
-(id)cssString;
-(id)cssStringForName:(id)arg0 ;
-(id)initWithCssString:(id)arg0 ;
-(int)compareValue:(id)arg0 ;


@end


#endif